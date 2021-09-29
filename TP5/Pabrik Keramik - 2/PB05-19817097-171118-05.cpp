// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : 19817097-171118-05
// Tanggal      : 18/11/2017
// Deskripsi    : Program untuk mencetak kemarik dengan besar N ke dalam file keramik.dat

#include <iostream>
#include <fstream>
using namespace std;

 int main()
 {
 	//kamus
 	int i,j,k,l,m,n;
 	ofstream keramik ("keramik.dat");

 	//algoritma
 	keramik.is_open();
 	cin>>n;
 	n=2*n; //Nilai n digantikan oleh 2*n

 	//Perulangan untuk cetak * baris per baris
 	i=1;
 	while (i<=n){
 		//Perulangan untuk cetak * kolom per kolom
 		j=1;
 		while(j<=n){
 			if ((i==1) || (i==n)) {
 				keramik<<"*";
 			}
 			else if ((j==1) || (j==i) || (j==n-i+1) || (j==n)){
 				keramik<<"*";
 			}
 			else {
 				keramik<<" ";
 			}
 		j++;
 		}
 		keramik<<endl;
 	i++;
 	}
 	keramik.close();
 }
