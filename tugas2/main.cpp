/*
    Nama    : Desmondy
    NIM     : A11.2022.14306
    Kls     : A11.4207
    Matkul  : Algoritma dan Pemrograman
    Tanggal : 27 Maret 2023
*/
#include <iostream>

using namespace std;

bool maxN(int a, int b);
bool minN(int a, int b);
int maxAray(int A[],int n);
int minAray(int A[], int n);
bool even (int a);
bool isOdd (int x, int y);
bool isFactor(int x,int y);
bool isFound (int x, int A[]);
void swapN(int x, int y);


int main()
{
    //Nilai MAX dan MIN diantara 2 bil
int a, b, n;

    cout << "=========MAX AND MIN 2 BILANGAN=========" << endl;
    cout << "Masukkan Angka 1: ";
    cin >> a;
    cout << "Masukkan Angka 2: ";
    cin >> b;
    cout << "Apakah " << a << " " << "lebih besar dari " << b << "?" << " " << maxN(a,b) << endl;
    cout << "Apakah " << a << " " << "lebih kecil dari " << b << "?" << " " << minN(a,b) << endl;
    cout << endl;
    cout << endl;

    //mencari nilai MAX dan MIN dari elemen sebuah array
    cout << "=========MAX AND MIN ELEMEN SEBUAH ARRAY=========" << endl;
    cout << "Masukkan Jumlah Array: ";
    cin >> n;
    int A[n];
    for (int i=0; i<n; i++){
        cout << "Masukkan Nilai Array ke- " << i+1 << ": " << endl;
        cin >> A[i];
    }
    cout << "Nilai terbesar dari Array tersebut adalah " << maxAray(A,n) << endl;
    cout << "Nilai terkecil dari Array tersebut adalah " << minAray(A,n) << endl;

    //mencari sebuah nilai dalam sebuah array
    cout << "=========isFound=========" << endl;
    int z;
    cout << "Masukkan angka yang ingin dicari dalam sebuah array: ";
    cin >> z;
    cout << "Apakah nilai " << z << " terdapat pada array di atas? =>" << isFound(z,A) << endl;
    cout << endl;
    cout << endl;

    //mencari apakah benar suatu bilangan bulat tersebut bernilai genap?
    cout << "=========isEven=========" << endl;
   int bil;
   cout << "Masukkan Bilangan bulat: " << endl;
   cin >> bil;
   cout << "Apakah " << bil << " merupakan bilangan genap? =>" << even(bil) << endl;
   cout << endl;
   cout << endl;


    cout << "=========isOdd=========" << endl;
   //mencari apakah benar hasil angka dari suatu operasi bernilai ganjil?
   int x,y;
   cout << "Masukkan Nilai Pertama: ";
   cin >> x;
   cout << "Masukkan Nilai Kedua: " << endl;
   cin >> y;
   cout << "apakah hasil dari penjumlahan " << x << "+" << y << " ganjil atau genap (Ganjil=1 | Genap=0): " << isOdd(x,y) << endl;

   cout << "=========isFactor=========" << endl;
   //mencari kebenaran apakah x merupakan bilangan faktor dari y?
   cout << "apakah " << x << " merupakan bilangan faktor dari " << y << "? " << isFactor(x,y) << endl;
   cout << endl;
   cout << endl;

   cout << "=========swapN=========" << endl;
   //swapping nilai x dan y;
   cout << "Menukar nilai x dan y: x=" << x << " & y= " << y << endl;
   swapN(x,y);




    return 0;
}
bool maxN(int a, int b){
    if (a>b){
        return true;
    }else{
    return false;
    }
}

bool minN(int a, int b){
    if (a<b){
        return true;
    }else{
    return false;
    }
}

int maxAray(int A[], int n){
    int temp= A[0];
    for (int i=0; i<n; i++){
        if (A[i] > temp){
            temp = A[i];
        }
    }
    return temp;
}

int minAray(int A[], int n){
    int temp= A[0];
    for (int i=0; i<n; i++){
        if (A[i] < temp){
            temp = A[i];
        }
    }
    return temp;
}

bool even (int a){
    if (a%2 == 0){
        return true;
    }else{
        return false;
    }
}

bool isOdd (int x, int y){
    int sum = x+y;
    if (sum%2 == 0){
        return false;
    }else{
        return true;
    }
}

bool isFactor(int x, int y){
    if (y%x == 0){
        return true;
    }else{
        return false;
    }
}

bool isFound (int z, int A[]){
    int n;
    for (int i=0; i<n; i++){
        if (A[i] == z){
            return true;
        }
    }
    return false;
}

void swapN(int x, int y){
    int temp;
    temp=x;
    x=y;
    y= temp;

    cout << "Hasil tukar: x= " << x <<  " & y= " << y << endl;
}



