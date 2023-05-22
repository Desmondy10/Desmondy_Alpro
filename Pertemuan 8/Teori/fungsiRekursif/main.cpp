#include <iostream>

using namespace std;

int faktorial(int n)
{
    if(n==1)
        return 1;
    else
        return n*faktorial(n-1);
}

int kali (int a,int b)
{
    if (b==1)
        return a;
    else
        return a+kali(a,b-1);
}

int jumlah(int n){
    if(n == 0){
        return 0;
    }else{
        return n + jumlah(n - 1);
    }
}

int kurang(int a, int b){
    if(b == 0){
        return a;
    }else{
        return kurang(a - 1, b - 1);
    }
}

float bagi(float angka, float pembagi){
    if(angka < pembagi){
        return 0;
    }else{
        return 1 + bagi(angka - pembagi, pembagi);
    }
}

int pangkat(int angka, int pemangkat){
    if(pemangkat == 0){
        return 1;
    }else{
        return angka * pangkat(angka, pemangkat - 1);
    }
}

int fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    int n;

    cout << "================FAKTORIAL================" << endl;
    cout << "Masukkan basis faktorial: ";
    cin >> n;

    int hslFak = faktorial(n);

    cout << "Hasil dari Faktorial " << n << " adalah: " << hslFak << endl;
    cout << endl;
    cout << endl;

    cout << "================PERKALIAN================" << endl;
    int a,b;
    cout << "Masukkan Angka pertama: ";
    cin >> a;
    cout << "Masukkan Angka kedua: ";
    cin >> b;
    int hslKali=kali(a,b);
    cout << "Hasil dari perkalian " << a << " dan " << b << " adalah: " << hslKali << endl;

    cout << endl;
    cout << endl;

    cout << "================PENJUMLAHAN================" << endl;
    int jum;
    cout << "Masukkan Angka: ";
    cin >> jum;
    int hslJum = jumlah(jum);
    cout << "Hasil dari Penjumlahan " << jum << " adalah: " << hslJum << endl;

    cout << endl;
    cout << endl;

    cout << "================PENGURANGAN================" << endl;
    int kur1, kur2;
    cout << "Masukkan Angka pertama: ";
    cin >> kur1;
    cout << "Masukkan Angka kedua: ";
    cin >> kur2;
    int hslkur = kurang(kur1,kur2);
    cout << "Hasil dari Pengurangan " << kur1 << " dan " << kur2 << " adalah: " << hslkur << endl;

    cout << endl;
    cout << endl;

    cout << "================PEMBAGIAN================" << endl;
    int bagi1,bagi2;
    cout << "Masukkan Angka pertama: ";
    cin >> bagi1;
    cout << "Masukkan Angka kedua: ";
    cin >> bagi2;
    int hslbag = bagi(bagi1,bagi2);
    cout << "Hasil dari pembagian " << bagi1 << " dan " << bagi2 << " adalah: " << hslbag << endl;

    cout << endl;
    cout << endl;

    cout << "================PANGKAT================" << endl;
    int angka,pemangkat;
    cout << "Masukkan Angka: ";
    cin >> angka;
    cout << "Masukkan Angka Pangkat: ";
    cin >> pemangkat;
    int hslpang = pangkat(angka,pemangkat);
    cout << "Hasil dari " << angka << " pangkat " << pemangkat << " adalah: " << hslpang << endl;

    cout << endl;
    cout << endl;

    cout << "================FIBONACCI================" << endl;
    int fib,j=0;
    cout << "Masukkan Jmlah Angka: ";
    cin >> fib;

    cout << "Jumlah angka fibonacci: ";
    for(int i=0; i<=jum; i++){
        cout << "Fibbonacci ke-" << i << ": " << fibonacci(j) << endl;
    }

    cout << endl;
    cout << endl;
    return 0;
}
