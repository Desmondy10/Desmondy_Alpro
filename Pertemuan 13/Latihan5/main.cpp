/*
    Nama: Desmondy
    NIM: A11.2022.14306
    Matkul: Algoritma dan Pemrograman
    Klpk: A11.4207
*/

#include <iostream>

using namespace std;
struct sepeda
{
    string merk="Polygon";
    string type="Sepeda Gunung";
    int tahun=2013;
    string harga="2.000.000";
}
;
int main()
{
    sepeda spd;
    sepeda *sepd;
    sepd=&spd;
    cout << sepd->merk << endl;
    cout << sepd->type << endl;
    cout << sepd->tahun << endl;
    cout << sepd->harga << endl;
    return 0;
}
