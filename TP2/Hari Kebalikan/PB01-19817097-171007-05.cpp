// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : Fungsi Aneh
// Tanggal      : 07/10/2017
// Deskripsi    : Program untuk membalikkan angka bilangan positif
//                dan deretan angka 0 di belakang tidak ditulis

#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int x,n,k,y,i,j,pangkat;

    //Algoritma
    cout<<"Masukkan nilai X : "; cin>>x;
    k=x; //Nilai k digantikan oleh x
    n=0;
    //Untuk mencari banyak digit
    while(x>0){x/=10; n++;}

    y=0;
    for(i=n; i>=1; i--){//Perulangan untuk mengalikan 10^i dengan angka di digit terakhir
        //Untuk mencari 10^i
        pangkat=1;
        if(i>1){
            for(j=1; j<=i-1; j++){pangkat=pangkat*10;}
            }


    y=(k%10)*pangkat+y; //k%10 untuk mengambil angka di digit terakhir
    k=k/10;
    }
    cout<<y;
}
