// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : 19817097-171021-03
// Tanggal      : 21/10/2017
// Deskripsi    : Program cetak bilangan prima sebanyak n

#include<iostream>
using namespace std;

bool isPrime(int x);
int main(){
    //Kamus
    int n,j,i;

    //Algoritma
    cout<<"Masukan nilai N : "; cin>>n;
    j=0;
    for(i=2; j<n; i++){
        if(isPrime(i)==true){
            cout<<i<<endl;
            j++;
        }
    }
}

bool isPrime(int x){
    //Kamus Lokal
    int i;

    //Algoritma
    if(x==2){return(true);}
    for(i=2; i<x; i++){
        if(x%i==0){return(false);}
    }
}
