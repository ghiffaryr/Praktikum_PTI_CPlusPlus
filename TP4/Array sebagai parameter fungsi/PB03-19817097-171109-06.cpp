// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : 19817097-171109-06
// Tanggal      : 09/11/2017
// Deskripsi    : Program untuk menampilkan nilai rata-rata, nilai maksimum dan banyak bilangan negatif dari array

#include<iostream>
using namespace std;

float Ratarata (int A[100],int N){
    //Kamus Lokal
    int Jumlah,i;

    //Algoritma
    Jumlah=0;
    for(i=0;i<N;i++){
        Jumlah=Jumlah+A[i];
    }

    return (float(Jumlah)/N);
}

int Maks (int A[100],int N){
    //Kamus Lokal
    int i,Maks;

    //Algoritma
    Maks=A[0];
    for(i=1;i<N;i++){
        if(A[i]>Maks){Maks=A[i];}
    }
    return (Maks);
}

int Negatif (int A[100],int N){
    //Kamus Lokal
    int Negatif,i;

    //Algoritma
    Negatif=0;
    for(i=0;i<N;i++){
        if(A[i]<0){Negatif=Negatif+1;}
    }
    return (Negatif);
}

int main(){
    //Kamus
    int N,i;
    int A[100];

    //Algoritma
    cout<<"Masukkan nilai N : "; cin>>N;

    for(i=0;i<N;i++){
        cout<<"Masukkan A["<<i<<"] : "; cin>>A[i];
    }

    cout<<"Rata-rata : "<<Ratarata(A,N)<<endl;
    cout<<"Nilai maksimum : "<<Maks(A,N)<<endl;
    cout<<"Banyak nilai negatif : "<<Negatif(A,N);

    return 0;
}
