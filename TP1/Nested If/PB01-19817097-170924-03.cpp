// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama file    : Nested If
// Tanggal      : 24/09/2017
// Deskripsi    : Program untuk menentukan apakah X itu termasuk bilangan
//                negatif, nol, bilangan positif ganjil, atau bilangan positif genap

#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int X;

    //Algoritma
    cout<<"Masukan X : "; cin>>X; cout<<endl;
    cout<<"X adalah bilangan"<<" ";

    if (X<0) {
        cout<<"negatif";
    }

    else if (X>0) {
        cout<<"positif"<<" ";
            if (X%2==0) {cout<<"genap";}
            if (X%2!=0) {cout<<"ganjil";}
    }

    else cout<<"nol";

    return 0;
}
