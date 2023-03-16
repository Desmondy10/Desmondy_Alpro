#include <iostream>

using namespace std;

int pertambahan(int x,int y){
    return x+y;
}
int pengurangan(int x,int y){
    return x-y;
}
int perkalian(int x,int y){
    return x*y;
}
int total(int n,int aray[]){
    int tot;
    for(int a=0;a<n;a++){
        tot= tot + aray[a];
    }
    return tot;
}
float rata(int r,int aray[]){
    float t=0;
    float rt=0;
    for(int a=0;a<r;a++){
        t= t + aray[a];
    }
    rt= t/r;
    return rt;
}
int a1,a2;
int main()
{
    cout << "===============Operasi Sederhana Matematika===============" << endl;
    cout << endl;

    cout << "Masukkan Angka Pertama = ";
    cin >> a1;
    cout << "Masukkan Angka Kedua   = ";
    cin >> a2;
    cout << "Hasil Pertambahan      = " << pertambahan(a1,a2) << endl;
    cout << "Hasil Pengurangan      = " << pengurangan(a1,a2) << endl;
    cout << "Hasil Perkalian        = " << perkalian(a1,a2) << endl;
    cout << endl;
    cout << endl;


    cout<<"==============Mencari Nilai Keseluruhan dan Rata-Rata dari Sebuah Array==============="<<endl;
    cout << endl;

    cout << "Masukkan Jumlah Array   = ";
    int n;
    cin >> n;
    int aray[n];
    for(int a=0;a<n;a++){
        cout << "Masukkan Nilai Array ke- " << a+1 << ":";
        cin>>aray[a];
    }
    cout << "Total Nilai Dari Array        = " << total(n,aray) << endl;
    cout <<"Rata - Rata Nilai Dari Array  = " << rata(n,aray) <<endl;

    return 0;
}
