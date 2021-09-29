// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : 19817097-171118-03
// Tanggal      : 18/11/2017
// Deskripsi    : Program untuk Inverse Matriks

#include <iostream>
using namespace std;

int main()
{
    //Kamus
    bool identitas;
    int N,i,j,M[100][100],count1,count2;

    //Algoritma
    cout<<"Masukkan nilai N : "; cin>>N;
    cout<<endl;

    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            cout<<"Masukkan A["<<i<<","<<j<<"] : "; cin>>M[i][j];
        }
        cout<<endl;
    }
    count1=0;
    count2=0;
    for(i=1;i<=N;i++){
        if(M[i][i]==1){count1++;}
        for(j=1;j<=N;j++){
            if(M[i][j]==0){count2++;}
        }
    }
    if ((count1==N)&&(count2==N*N-N)) {cout<<"Matriks ini adalah matriks identitas ";}
    else {cout<<"Matriks ini bukan matriks identitas";}

    return 0;
}
