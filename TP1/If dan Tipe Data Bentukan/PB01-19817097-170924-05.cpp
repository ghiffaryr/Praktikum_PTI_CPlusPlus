// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama file    : If dan Tipe Data Bentukan
// Tanggal      : 24/09/2017
// Deskripsi    : Program untuk menerima 2 buah nama mahasiswa beserta NIMnya dan menentukan
//                apakah kedua data tersebut memiliki nama dan NIM yang sama

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    //Kamus
    string Nama1, Nama2;
    string NIM1, NIM2;

    //Algoritma
    cout<<"Masukkan Nama 1 : "; getline(cin,Nama1);
    cout<<"Masukkan NIM 1 : "; getline(cin,NIM1); cout<<endl;

    cout<<"Masukkan Nama 2 : "; getline(cin,Nama2);
    cout<<"Masukkan NIM 2 : "; getline (cin,NIM2); cout<<endl;

    if (Nama1==Nama2 && NIM1==NIM2) {
    cout<<"Data 1 dan 2 sama";}

    else cout<<"Data 1 dan 2 tidak sama";

    return 0;
}
