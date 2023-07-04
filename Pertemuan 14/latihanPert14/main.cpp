/*
    Nama: Desmondy
    NIM: A11.2022.14306
    klpk: A11.4207
    Algortima dan Pemrograman
*/

#include <iostream>
#include <chrono>

using namespace std;

void show(int arr[], int n);

void Bubble(int arr[], int n);
void insertion(int arr[], int n, int awal);
void selection(int arr[], int n, int awal);

int linear(int arr[], int key, int awal, int akhir);
int binary(int arr[], int left, int right, int target);

int arraySum(int *arr, int size);

int main() {

    auto start = std::chrono::high_resolution_clock::now();

    cout << "BUBBLE SORT : " << endl;
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(int);
    cout << "Array sebelum diurutkan: ";
    show(arr, size);
    Bubble(arr, size);
    cout << "Array sesudah diurutkan: ";
    show(arr, size);

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    cout << "Waktu eksekusi Bubblesort: " << duration << " mikrodetik" << endl;

    //============================================================================

    auto start = std::chrono::high_resolution_clock::now();

    cout << "\nSELECTION SORT : " << endl;
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int size1 = sizeof(arr1) / sizeof(int);
    cout << "Array sebelum diurutkan: ";
    show(arr1, size1);
    selection(arr1, size1-1, 0);
    cout << "Array sesudah diurutkan: ";
    show(arr1, size1);

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    cout << "Waktu eksekusi Selectionsort: " << duration << " mikrodetik" << endl;


    cout << "\nINSERTION SORT : " << endl;
    int arr2[] = {64, 34, 25, 12, 22, 11, 90};
    int size2 = sizeof(arr2) / sizeof(int);
    cout << "Array sebelum diurutkan: ";
    show(arr2, size2);
    insertion(arr2, size2-1, 0);
    cout << "Array sesudah diurutkan: ";
    show(arr2, size2);



    int key = 25;
    cout << "\nLINEAR SEARCH" <<endl;
    cout << "angka yang dicari : " << key << endl;

    int index = linear(arr, key, 0, size - 1);

    if (index != -1) {
        cout << "angka " << key << " ditemukan pada indeks " << index << endl;
    } else {
        cout << "angka " << key << " tidak ditemukan dalam array" << endl;
    }



    int *pointerkey = &key;
    cout << "\nukuran pointernya adalah " << sizeof(pointerkey) << endl;
    if(sizeof(pointerkey) == 4){
        cout << "maka sistem yang digunakan adalah 32-bit" <<endl;
    }else if(sizeof(pointerkey) == 8){
        cout << "maka sistem yang digunakan adalah 64-bit" <<endl;
    }



    int sum = arraySum(arr, size);
    cout << "\nREKURSIF POINTER" <<endl;
    for (int i = 0; i < size; i++) {
        if(i == size-1)
            cout << arr[i];
        else
            cout << arr[i] << " + ";
    }
    cout << " = " << sum << endl;

    return 0;
}


void show(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Bubble(int arr[], int n) {
    if (n > 1) {
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
            }
        }
        Bubble(arr, n - 1);
    }
}

void insertion(int arr[], int n, int awal) {
    if (n <= awal)
        return;
    int next = arr[awal + 1];
    int last = awal;

    while (last >= 0 && arr[last] > next) {  // var "NEXT" dibandingin sama semua array dikirinya
        swap(arr[last],arr[last+1]);         // swap "LAST" dengan array dikanannya
        last--;
    }
    insertion(arr, n , awal+1 );
}

void selection(int arr[], int n, int awal) {
    if(awal < n){
        int min_idx = awal;
        for (int i = awal + 1; i < n+1 ; i++) {

            if (arr[i] < arr[min_idx])
                min_idx = i;
        }
        swap(arr[min_idx], arr[awal]);

        selection(arr,n,awal+1);
    }
}

int linear(int arr[], int key, int awal, int akhir) {
    if(awal > akhir) {
        return -1;
    }
    if(arr[awal] == key) {
        return awal;
    }
    return linear(arr, key, awal + 1, akhir);
}



int arraySum(int *arr, int size) {      // int *arr = MENUNJUK INDEX KE 1
    if (size == 0) {
        return 0;
    } else {
        return *arr + arraySum(arr + 1, size - 1);
        // *arr      = value array index ke...
        //  arr + 1  = alamat array + 1
    }
}
