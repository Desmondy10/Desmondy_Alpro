/*
    Nama: Desmondy
    NIM: A11.2022.14306
    Matkul: Algoritma dan Pemrograman
    Klpk: A11.4207
*/

#include <iostream>

using namespace std;

enum musim{kemarau,penghujan};
musim cuaca;

int main()
{
    cuaca = kemarau;
    cout << cuaca << endl;
    cuaca = penghujan;
    cout << cuaca << endl;
    return 0;
}
