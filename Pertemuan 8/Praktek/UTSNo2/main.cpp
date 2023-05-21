/*
    Nama: Desmondy
    Nim: A11.2022.14306
    KLPK: A11.4207
    Soal no 2
*/
#include <iostream>

using namespace std;
// deklarasi
void shelSort(int arr[], int n){
    //n=5
    for (int a=n/2; a>0; a= a/2){
        // a=2,
        for (int b=a; b<n; b++){
        // b=2, 3
            for (int c=b-a; c>=0; c-=a){
        //c=0, 1
                if (arr[c+a] > arr[c]){
                    int temp = arr[c+a];
                    arr[c+a] = arr[c];
                    arr[c] = temp;
                }
            }
        }

    }

}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << std::endl;
}
int main()
{
    int n;
    cout << "Masukkan Jumlah Array: ";
    cin >> n;

    int arr[n];
    for (int i=0; i<n; i++){
        cout << "Masukkan Nilai Array ke-" << i+1 << " : ";
        cin >> arr[i];
    }
    cout << endl;
    cout << endl;
    //Cetak Array sementara
    cout << "Elemen array saat ini (sebelum diurutkan) adalah: ";
    for (int a=0; a<n; a++){
        cout << arr[a] << " ";
    }
    cout << endl;
    cout << endl;

    // proses shellsort
    shelSort(arr,n);

    cout << "Data yang telah diurutkan (Shell Sort): ";
    printArray(arr,n);

    selectionSort(arr,n);
    cout << "Data yang telah diurutkan (Selection Sort): ";
    printArray(arr,n);



    return 0;
}


