// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : 19817097-171021-04
// Tanggal      : 21/10/2017
// Deskripsi    : Program mengecek bilangan polindrom atau tidak

#include<iostream>
using namespace std;

bool isPalindrom(int x);
int main(){
    //Kamus
    int x;

    //Algoritma
    cout<<"Masukan nilai X : "; cin>>x;
    cout<<x;
    if(isPalindrom(x)==true){cout<<" adalah bilangan palindrom";}
    else {cout<<" bukan bilangan palindrom";}
}

bool isPalindrom(int x){
    //Kamus Lokal
    int l,n,k,y,i,j,pangkat;
    bool isPalindrom;

    //Algoritma
    l=x;
    k=x;
    n=0;
    while(x>0){x/=10; n++;}

    y=0;
    for(i=n; i>=1; i--){
        pangkat=1;
        for(j=1; j<i; j++){
            pangkat*=10;
        }
    y=(k%10)*pangkat+y;
    k/=10;
    }

    if(y==l){isPalindrom=true;}
    else {isPalindrom=false;}

    return(isPalindrom);
}
