// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : 19817097-171109-02
// Tanggal      : 09/11/2017
// Deskripsi    : Program untuk cetaklah matriks yang berisi P elemen dan nilai lainnya 0 dalam NxM Matriks
//                tersebut kedalam sebuah file bernama vin.dat, indeks dari 1,1

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //Kamus
    int N,M,P,i,j,A[100][100];
    ofstream myfile ("vin.dat");

    //Algoritma
    cout<<"Masukan nilai N : "; cin>>N;
    cout<<"Masukan nilai M : "; cin>>M;
    cout<<"Masukan nilai P : "; cin>>P;

    cout<<endl;

    for(i=1;i<=N;i++){
        for(j=1;j<=M;j++){
            A[i][j]=0;
        }
    }

    for(i=1;i<=P;i++){
        cout<<"Masukan baris p"<<i<<" : "; cin>>i;
        cout<<"Masukan kolom p"<<i<<" : "; cin>>j;
        cout<<"Masukan nilai p"<<i<<" : "; cin>>A[i][j];
        cout<<endl;
    }

    cout<<"Isi vin.dat :"<<endl;
    myfile.is_open();
    for(i=1;i<=N;i++){
        for(j=1;j<=M;j++){
            myfile<<A[i][j]<<" ";
        }
    }

    for(i=1;i<=N;i++){
        for(j=1;j<=M;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    myfile.close();

    return 0;
}
