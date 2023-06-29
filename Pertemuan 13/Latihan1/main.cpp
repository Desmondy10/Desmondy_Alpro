/*
    Nama: Desmondy
    NIM: A11.2022.14306
    Matkul: Algoritma dan Pemrograman
    Klpk: A11.4207
*/
#include <iostream>

using namespace std;
struct bangunDatar
{
    float phi=3.14;
    int luasPersegiPanjang(int panjang,int lebar)
    {
        return panjang*lebar;
    }
    float luasLingkaran(int r)
    {
        return (22*r*r)/7;
    }
    float volumeKerucut(int r,int t)
    {
        return (phi*r*r*t)/3;
    }
    float volumeBola(int r)
    {
        return (4*phi*r*r*r)/3;
    }
};

int main()
{
    bangunDatar lat1;

    cout << lat1.luasPersegiPanjang(8,10) << endl;
    cout << lat1.luasLingkaran(7) << endl;
    cout << lat1.volumeKerucut(4,6) << endl;
    cout << lat1.volumeBola(3) << endl;
    return 0;
}
