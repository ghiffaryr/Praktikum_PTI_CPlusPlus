// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : 19817097-171109-01
// Tanggal      : 09/11/2017
// Deskripsi    : Program untuk menyimpan bilangan bulat ke dalam array

#include<iostream>
using namespace std;

int main(){
    //Kamus
    int N,i;
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

    return 0;
}
