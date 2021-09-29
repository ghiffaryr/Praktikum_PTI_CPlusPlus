// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : 19817097-171118-04
// Tanggal      : 18/11/2017
// Deskripsi    : Program untuk menggabungkan 3 file

#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    //Kamus
    string line;
    ifstream file01("file01.txt"),file02("file02.txt"),file03("file03.txt");
    ofstream file("file-concat.txt");

    //Algoritma
    if(file01.is_open())
    {
        while(getline(file01,line))
        {
            file<<line<<endl;
        }
    }
    file01.close();

    if(file02.is_open())
    {
        while(getline(file02,line))
        {
            file<<line<<endl;
        }
    }
    file02.close();

    if(file03.is_open())
    {
        while(getline(file03,line))
        {
            file<<line<<endl;;
        }
    }
    file03.close();

    return 0;
}
