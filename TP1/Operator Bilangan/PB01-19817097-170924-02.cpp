// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama file    : Operator Bilangan
// Tanggal      : 24/09/2017
// Deskripsi    : Program untuk menerima 2 buah integer dan sebuah operator

#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int A,B;
    string op;

    //Algoritma
    cout<<"Masukkan angka pertama : "; cin>>A;
    cout<<"Masukkan angka kedua : "; cin>>B;
    cout<<"Masukkan operator : "; cin>>op;

    if (op=="+"){
        cout<<A<<" + "<<B<<" = "<<A+B<<endl;}
    if (op=="-") {
        cout<<A<<" - "<<B<<" = "<<A-B<<endl;}
    if (op=="*") {
        cout<<A<<" * "<<B<<" = "<<A*B<<endl;}
    if (op=="/") {
        cout<<A<<" / "<<B<<" = "<<float(A)/float(B)<<endl;}
    if (op=="%") {
        cout<<A<<" % "<<B<<" = "<<A%B<<endl;}

    return 0;
}

