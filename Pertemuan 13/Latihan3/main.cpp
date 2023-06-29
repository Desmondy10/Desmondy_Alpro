/*
    Nama: Desmondy
    NIM: A11.2022.14306
    Matkul: Algoritma dan Pemrograman
    Klpk: A11.4207
*/

#include <iostream>

using namespace std;

typedef struct bangunDatar{

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
struct bangunDatar lat3;
int main()
{
    cout <<lat3.luasPersegiPanjang(5,8)<< endl;
    cout <<lat3.luasLingkaran(6)<< endl;
    cout <<lat3.volumeKerucut(7,3)<< endl;
    cout <<lat3.volumeBola(7)<< endl;
    return 0;
}

