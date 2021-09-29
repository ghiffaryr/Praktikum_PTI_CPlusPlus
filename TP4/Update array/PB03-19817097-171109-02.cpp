// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : 19817097-171109-02
// Tanggal      : 09/11/2017
// Deskripsi    : Program untuk menyimpan bilangan bulat ke dalam array dan mengupdate nilai array sebanyak M kali

#include<iostream>
using namespace std;

int main(){
    //Kamus
    int N,i,M,j;
    int A[100];

    //Algoritma
    cout<<"Masukkan nilai N : "; cin>>N;

    for(i=0;i<N;i++){
        cout<<"Masukkan A["<<i<<"] : "; cin>>A[i];
    }

    cout<<"Array berhasil disimpan!"<<endl;

    for(i=0;i<N;i++){
        cout<<A[i]<<" ";
    }

    cout<<endl<<endl;

    cout<<"Masukkan nilai M : "; cin>>M;

    for(i=1;i<=M;i++){
        cout<<"Masukkan index yang ingin diubah : "; cin>>j;
        cout<<"Masukkan nilai baru A["<<j<<"] : "; cin>>A[j];
    }

    cout<<"Array berhasil diupdate"<<endl;

    for(i=0;i<N;i++){
        cout<<A[i]<<" ";
    }

    return 0;
}
