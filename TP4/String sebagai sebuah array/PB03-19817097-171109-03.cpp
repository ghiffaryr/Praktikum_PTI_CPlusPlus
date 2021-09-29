// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : 19817097-171109-03
// Tanggal      : 09/11/2017
// Deskripsi    : Program untuk menuliskan karakter pada indeks ke-a sampai index ke-b pada string s

#include<iostream>
using namespace std;

int main(){
    //Kamus
    string s;
    int a,b,i;

    //Algoritma
    cout<<"Masukkan string s : "; cin>>s;
    cout<<"Masukkan nilai a : "; cin>>a;
    cout<<"Masukkan nilai b : "; cin>>b;
    cout<<"s["<<a<<".."<<b<<"] = ";

    for(i=a;i<=b;i++){
        cout<<s[i];
    }

    return 0;
}
