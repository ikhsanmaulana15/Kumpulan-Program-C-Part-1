#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main ()
{
    int x,jlh_anak;
    cout<<"Masukkan jumlah bola dalam keranjang :";
    cin>>jlh_anak;
    cout<<"Mari kita ambil bola sambil berhitung mulai dari "<<jlh_anak<<endl;
    cout<<"Mulai Berhitung !"<<endl;

    for (x=jlh_anak;x>0;x--)
    {
    if (x>1)
    cout<<"Jumlah bola ada "<<x<<"diambil satu tinggal "<<x-1<<endl;
    else if (x=1)
    cout<<"Jumlah Bola ada 1 diambil Satu Tinggal Kranjangnya"<<endl;
    }
    getch();
    return 0;

}
