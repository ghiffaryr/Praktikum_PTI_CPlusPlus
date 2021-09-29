// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : Cetak Angka
// Tanggal      : 07/10/2017
// Deskripsi    : Program cetak angka  1 sampai n, tiap 10 angka yang dioutput, cetak endline

#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int i,N;

    //Algoritma
    cout<<"Masukkan nilai N : "; cin>>N;
    i=1;
    while (i<=N){//Perulangan untuk mencetak angka 1 sampai N
    cout<<i<<" ";
    if (i%10==0){cout<<endl;} //Agar setelah cetak 10 angka masuk ke baris baru
    i++;}
}
