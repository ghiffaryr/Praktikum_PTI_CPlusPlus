// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : Banyak Digit
// Tanggal      : 07/10/2017
// Deskripsi    : Program untuk menentukan berapa digit angka yang
//                membentuk bilangan tersebut

#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int Angka, Digit;

    //Algoritma
    cout<<"Masukan X : "; cin>>Angka;
    cout<<Angka<<" terdiri dari ";

    Digit=0;
    while (Angka>0){Angka/=10; Digit++;}

    cout<<Digit<<" digit angka";

}
