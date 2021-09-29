// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : Banyak Digit
// Tanggal      : 24/09/2017
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

    Digit=1;
    while (Angka/=10){Digit++;}

    cout<<Digit<<" digit angka";

}
