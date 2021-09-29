// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : 19817097-171109-08
// Tanggal      : 09/11/2017
// Deskripsi    : Program untuk mengkalisilangkan 2 buah array

#include<iostream>
using namespace std;

int main(){
    //Kamus
    int M,N,i,j;
    int A[100];
    int B[100];

    //Algoritma
    cout<<"Masukkan nilai M : "; cin>>M;
    cout<<"Masukkan nilai N : "; cin>>N;

    for(i=0;i<M;i++){
        cout<<"Masukkan A["<<i<<"] : "; cin>>A[i];
    }

    cout<<endl;

    for(i=0;i<N;i++){
        cout<<"Masukkan B["<<i<<"] : "; cin>>B[i];
    }

    cout<<endl<<"===PERKALIAN SILANG=="<<endl;

    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
        cout<<"A["<<i<<"] * B["<<j<<"] = "<<A[i]*B[j]<<endl;
        }
    }

    return 0;
}
