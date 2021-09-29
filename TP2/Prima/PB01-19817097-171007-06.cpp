
// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : Bilangan Prima
// Tanggal      : 07/10/2017
// Deskripsi    : Program untuk menampilkan n deret bilangan prima

#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int n,i,j,k,prima;

    //Algoritma
    cout<<"Masukkan nilai N : "; cin>>n;
    i=1;
    k=2;
    prima=1;
    while(i<=n){//Untuk mencetak bilangan dari 1 sampai n
        for(j=2;j<k;j++){//Untuk mengecek bilangan prima atau tidak dengan membagi dengan bilangan dari 2 sampai k-1
                if(k%j==0){prima=0;}
            }
        if(prima==1){//Cetak nilai jika prima=1
                cout<<k<<endl;
                i++;}//Untuk membaca jika suatu angka telah dicetak
        prima=1;
        k++;
    }
}
