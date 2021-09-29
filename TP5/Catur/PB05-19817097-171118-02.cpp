// NIM/Nama     : 19817097/Ghiffary Rifqialdi
// Nama File    : 19817097-171118-02
// Tanggal      : 18/11/2017
// Deskripsi    : Program untuk menentukan bidak catur yang bisa diserang ratu

#include <iostream>
using namespace std;

int main()
{
    int Rx,Ry,a,b,i,j,N;
    bool catur[9][9],Dra,Dla,Drb,Dlb,Up,Right,Left,Down;   // Diagonal Right Above , Diagonal left Above , Diagonal Right Bottom, Diagonal left Bottom

    Dra= false;
    Drb= false;
    Dla= false;
    Dlb= false;
    cout<<"Masukkan posisi baris ratu Tuan Vin : ";
    cin >> Rx;
    cout<<"Masukkan posisi kolom ratu Tuan Vin : ";
    cin >> Ry;

    cout << "Masukkan banyak bidak : ";
    cin >> N;

    for (a=1;a<=8;a++)          // semua cell diisi false
    {
        for (b=1;b<=8;b++)
        {
            catur[a][b]=false;      // cell Baris x Kolom
        }
    }


    for (b=1;b<=N;b++)
    {
        cout << "Masukkan posisi baris bidak ke-" << b << " : ";
        cin >> i;
        cout << "Masukkan posisi kolom bidak ke-" << b << " : ";
        cin >> j;

        for (a=1;a<=7;a++)
        {
            if (j==Ry)   // ketika kolomnya sama
            {
                if(i==Rx-a && Up == false)    // bagian atas ratu
                {
                catur [i][j] = true;
                Up = true;
                }
                if(i==Rx+a && Down == false)   // bagian bawah ratu
                {
                catur [i][j] = true;
                Down = true;
                }
            }
            if (i==Rx)    // ketika barisnya sama
            {
                if(j==Ry-a && Left == false)   // bagian kiri ratu
                {
                catur [i][j] = true;
                Left = true;
                }
                if(j==Ry+a && Right== false)   //bagian kanan ratu
                {
                catur [i][j] = true;
                Right = true;
                }
            }
            if((i==Rx-a && j==Ry-a) && (Rx-a>=1 && Ry-a>=1) && Dla==false)    // bagian diagonal kiri atas
            {
                catur [i][j] = true;
                Dla = true;
            }
            if((i==Rx+a && j==Ry+a) && (Rx+a<=8 && Ry+a<=8) && Drb == false)     // bagian diagonal kanan bawah
            {
                catur [i][j] = true;
                Drb = true;
            }
            if((i==Rx+a && j==Ry-a) && (Rx+a<=8 && Ry-a>=1) && Dlb == false)    // bagian diagonal kiri bawah
            {
                catur [i][j] = true;
                Dlb = true;
            }
            if((i==Rx-a && j==Ry+a) && (Rx-a>=1 && Ry+a<=8) && Dra == false)      //bagian diagonal kanan atas
            {
                catur [i][j] = true;
                Dra = true;
            }
        }
    }

    for (a=1;a<=8;a++)
    {
        for (b=1;b<=8;b++)
        {
            if (catur[a][b] == true)
            {
                cout << a << ", " << b << endl;   // cetak
            }
        }
    }

    return 0;
}
