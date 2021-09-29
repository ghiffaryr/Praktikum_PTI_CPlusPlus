// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : 19817097-171109-05
// Tanggal      : 09/11/2017
// Deskripsi    : Program untuk mencetak array string lalu direverse indeks a sampai b dan dicetak hasil reversenya

#include<iostream>
using namespace std;

int main(){
    //Kamus
    string s;
    int a,b,i,j;
    char temp;

    //Algoritma
    cout<<"Masukkan nilai s : "; cin>>s;
    cout<<"Masukkan nilai a : "; cin>>a;
    cout<<"Masukkan nilai b : "; cin>>b;
    cout<<"Hasil :"<<endl;

    for(i=a,j=b;i<=j;i++,j--){
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }

    for(i=0;s[i];i++){
        cout<<s[i];
    }

    return 0;
}
