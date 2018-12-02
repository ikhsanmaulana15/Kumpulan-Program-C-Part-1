#include<iostream>
using namespace std;
int main ()
{
    int r, Luas, Keliling;
    cout<<"Program Menghitung Keliling&Luas Lingkaran!"<<endl;
    cout<<"Masukkan Jari-Jari Lingkaran:";
    cin>>r;

    Keliling= 2*3.14*r;
    cout<<"Keliling:"<<Keliling<<endl;

    Luas= 3.14*r*r;
    cout<<"Luas:"<<Luas;
    return 0;
}
