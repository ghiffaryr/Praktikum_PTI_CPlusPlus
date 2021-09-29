// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : 19817097-171021-01
// Tanggal      : 21/10/2017
// Deskripsi    : Program untuk menghitung kombinasi

#include<iostream>
using namespace std;

int Faktorial(int i);
int main(){
    //Kamus
    int n,r,Kombinasi;

    //Algoritma
    cout<<"Masukan nilai n : "; cin>>n;
    cout<<"Masukan nilai r : "; cin>>r;
    cout<<"Nilai C("<<n<<","<<r<<") adalah ";
    Kombinasi=(Faktorial(n))/((Faktorial(r))*(Faktorial(n-r)));
    cout<<Kombinasi;
}

int Faktorial (int i){
    //Kamus Lokal
    int j,f;

    //Algoritma
    j=1;
    for(f=i; f>=1; f--){
        j=f*j;
    }
    if(f=0){return(1);}
    return(j);
}
