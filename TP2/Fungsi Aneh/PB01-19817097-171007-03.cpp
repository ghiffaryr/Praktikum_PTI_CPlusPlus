// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : Fungsi Aneh
// Tanggal      : 07/10/2017
// Deskripsi    : Program untuk mengeluarkan nilai x dari beberapa fungsi

#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int x;

    //Algoritma
    cout<<"Masukkan nilai X : "; cin>>x;
    while ((x!=1)&&(x%7!=0)){
        if(x%2==0){x=x/2;} //Nilai x digantikan oleh x/2 jika x mod 2 = 0
        else {//x%2=1
            x=3*x+1;} //Nilai x digantikan oleh 3*x+1 jika x mod 2 = 1
        }
    if(x==1){cout<<"Output : "<<x;}
    else {//x!=1 dan x%7==0
        cout<<"Output : "<<x;}
}
