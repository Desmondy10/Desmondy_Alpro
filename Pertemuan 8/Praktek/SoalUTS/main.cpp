/*
    Nama: Desmondy
    Nim: A11.2022.14306
    KLPK: A11.4207
    Soal no 1
*/
#include <iostream>

using namespace std;

bool isGanjil(int g){
    if(g%2 == 1){
        return true;
    }else{
        return false;
    }
}

void genapTerkecil(int Arr[],int n){
    int min= Arr[0];
    int index;
    for(int i=0; i<n; i++){
        if(!isGanjil(Arr[i])){
            if(Arr[i] < min){
                min=Arr[i];
                index=i;
            }
        }
    }
    cout << "Genap terkecil: " << min << endl;
    cout << "Berada di Index: " << index;
}
int main()
{
    int arr[5]={4,2,6,7,8};
    int n= sizeof(arr)/sizeof(arr[0]);

    genapTerkecil(arr,n);
    return 0;
}
