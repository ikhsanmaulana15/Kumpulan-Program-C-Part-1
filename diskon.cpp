#include <iostream>
using namespace std;

int main()
{
    int bayar,akhir,diskon;

    cout<<"masukkan total pembayaran = ";
    cin>>bayar;
    if ((bayar>=100000) && (bayar<600000)){
        diskon=bayar*0.05;
        akhir=bayar-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 5%"<<endl;
    } else if ((bayar>=600000) && (bayar<1000000)){
        diskon=bayar*0.1;
        akhir=bayar-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 10%"<<endl;
    } else if (bayar>=1000000){
        diskon=bayar*0.15;
        akhir=bayar-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 15%"<<endl;
    }else {
        akhir=bayar;
    }
    cout<<endl<<"jadi total pembayarannya = "<<akhir<<endl;;
    return 0;
}
