// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : 19817097-171109-07
// Tanggal      : 09/11/2017
// Deskripsi    : Program untuk menjumlahkan 2 buah array

#include<iostream>
using namespace std;

int main(){
    //Kamus
    int N,i;
    int A[100];
    int B[100];
    int C[100];

    //Algoritma
    cout<<"Masukkan nilai N : "; cin>>N;

    for(i=0;i<N;i++){
        cout<<"Masukkan A["<<i<<"] : "; cin>>A[i];
    }

    cout<<endl;

    for(i=0;i<N;i++){
        cout<<"Masukkan B["<<i<<"] : "; cin>>B[i];
    }

    for(i=0;i<N;i++){
        C[i]=A[i]+B[i];
    }

    cout<<endl;

    cout<<"Isi dari C adalah"<<endl;
    for(i=0;i<N;i++){
        cout<<C[i]<<" ";
    }

    return 0;
}
