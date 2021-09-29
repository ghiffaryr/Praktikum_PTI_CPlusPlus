// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : 19817097-171021-02
// Tanggal      : 21/10/2017
// Deskripsi    : Program untuk mencetak kecepatan saat t, dengan menurunkan persamaan jarak

#include<iostream>
#include<iomanip>
using namespace std;

int Turunan(int koef[100], int pmaks);
int main(){
    //Kamus
    float i,t,k;
    double e,epangkat;
    int pangkat, pmaks;
    int koef[100];

    //Algoritma
    cout<<"Masukkan nilai t : "; cin>>t;
    cout<<"Mobil akan melaju ";

    e=2.71828182845904523536028747135266249775724709369995957496696762772407663035354759457138217852516642742746;
    pangkat=(2*t)+1;
    pmaks=1;
    koef[1]=2;
    koef[0]=1;
    epangkat=1;

    for(i=1; i<=pangkat; i++){
            epangkat=e*epangkat;
    }
    cout<<fixed<<setprecision(4)<<double(((Turunan(koef,pmaks)))*epangkat)<<" km/s";
}

int Turunan(int koef[100], int pmaks){//Turunan Berpangkat Positif
    //Kamus Lokal
    int i,j,k,Turunan,t;
    int koeft[100],var[100],vart[100];

    //Algoritma
    for(i=pmaks; i>=0; i--){//koef turunan
        koeft[i]=koef[i]*i;
    }

    for(i=pmaks; i>=0; i--){
        k=1;
        if(i==1){k=1;}//variabel turunan untuk variabel berpangkat 1 = 1
        else{
                for(j=i-1; j>0; j--){//variabel turunan untuk variabel berpangkat lebih dari 1
                k=t*k;
                }
        }
    vart[i]=k;
    }

    Turunan=0;
    for(i=pmaks, j=pmaks; i>=0, j>=0; i--, j--){
        var[j]=koeft[i]*vart[i];
        Turunan=var[j]+Turunan;
    }
    return(Turunan);
}
