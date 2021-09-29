// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : 19817097-171109-04
// Tanggal      : 09/11/2017
// Deskripsi    : Program untuk mencetak array sebanyak N lalu dari indeks a sampai b dicetak reversenya

#include<iostream>
using namespace std;

int main(){
    //Kamus
    int N,a,b,i,j,temp;
    int A[100];

    //Algoritma
    cout<<"Masukkan nilai N : "; cin>>N;
    cout<<"Masukkan nilai a : "; cin>>a;
    cout<<"Masukkan nilai b : "; cin>>b;

    for(i=0;i<N;i++){
        cout<<"Masukkan A["<<i<<"] : "; cin>>A[i];
    }

    cout<<"Array sebelum diubah :"<<endl;

    for(i=0;i<N;i++){
        cout<<A[i]<<" ";
    }

    cout<<endl<<"Array sesudah diubah :"<<endl;

    for(i=a,j=b;i<=j;i++,j--){
       temp=A[i];
       A[i]=A[j];
       A[j]=temp;
    }

    for(i=0;i<N;i++){
        cout<<A[i]<<" ";
    }

    return 0;
}
