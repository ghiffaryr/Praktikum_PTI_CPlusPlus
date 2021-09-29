// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama file    : Tipe Data Bentukan
// Tanggal      : 24/09/2017
// Deskripsi    : Program untuk menampung nama dan nim dari
//                seorang mahasiswa

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    //Kamus
    string Nama;
    string NIM;

    //Algoritma
    cout<<"Masukkan Nama : "; getline(cin,Nama);
    cout<<"Masukkan NIM : "; getline(cin,NIM);
    cout<<NIM<<" - "<<Nama<<", berhasil disimpan";

    return 0;
}
