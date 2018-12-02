#include<iostream.>
#include<conio.h>
using namespace std;
    int main()
    {
            char nama[30], lagi;
            int umur,umur2,tgl,bln,thn,tgl2,bln2,thn2;

        do


        {   cout<<"Hai Kawan Berapa Usiamu, Mari Berhitung"<<endl;

            cout<<"masukan nama anda      : ";cin>>nama;
            cout<<"masukan tanggal lahir anda = ";cin>>tgl;
            cout<<"masukan bulan lahir anda   = ";cin>>bln;
            cout<<"masukan tahun lahir anda   = ";cin>>thn;

            cout<<endl;

            cout<<"masukan tanggal sekarang   = ";cin>>tgl2;
            cout<<"masukan bulan sekarang     = ";cin>>bln2;
            cout<<"masukan tahun sekarang     = ";cin>>thn2;

            if (thn2 > thn)
            {
                umur = thn2 - thn;
                if ((bln2 >= bln) && (tgl2 >= tgl))
                {
                    umur2 = umur;
                }
                else if ((bln2 < bln) && (tgl2 >= tgl))
                {
                    umur2 = umur - 1;
                }
                else if ((bln2 = bln) && (tgl2 < tgl))
                {
                    umur2 = umur - 1;
                }
            }

            cout<<"Nama  : "<<nama<<endl;
            cout<<"Umur  : "<<umur2<<endl;
            cout<<"Input Lagi [Y/T] : ";cin>>lagi;
        }
        while((lagi == 'y') || (lagi == 'Y'));
        return 0;
    }
