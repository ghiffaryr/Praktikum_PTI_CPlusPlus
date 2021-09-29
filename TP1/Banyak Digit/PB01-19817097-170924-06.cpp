// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : Banyak Digit
// Tanggal      : 24/09/2017
// Deskripsi    : Program untuk menentukan berapa digit angka yang
//                membentuk bilangan tersebut

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //Kamus
    int Angka, Digit;

    //Algoritma
    cout<<"Masukan X : "; cin>>Angka;
    cout<<Angka<<" terdiri dari ";

    if (Angka>-1 && Angka<10){cout<<"1 digit angka";}
    else if (Digit=floor(log10(Angka)))
        {Digit++; cout<<Digit<<" digit angka";}
}
