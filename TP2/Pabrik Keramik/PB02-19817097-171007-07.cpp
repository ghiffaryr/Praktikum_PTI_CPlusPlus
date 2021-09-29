// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : Pabrik Kemarik
// Tanggal      : 07/10/2017
// Deskripsi    : Program cetak keramik dengan besar N

#include <iostream>

using namespace std;

 int main()
 {
 	//kamus
 	int i,j,k,l,m,n;

 	//algoritma
 	cin>>n;
 	n=2*n; //Nilai n digantikan oleh 2*n

 	//Perulangan untuk cetak * baris per baris
 	i=1;
 	while (i<=n){
 		//Perulangan untuk cetak * kolom per kolom
 		j=1;
 		while(j<=n){
 			if ((i==1) || (i==n)) {
 				cout<<"*";
 			}
 			else if ((j==1) || (j==i) || (j==n-i+1) || (j==n)){
 				cout<<"*";
 			}
 			else {
 				cout<<" ";
 			}
 		j++;
 		}
 		cout<<endl;
 	i++;
 	}
 }
