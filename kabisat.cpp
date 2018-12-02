#include <iostream>

using namespace std;

int main()
{
    int tahun,pilihan1,pilihan2,pilihan;
    cout << "Program Menetukan Tahun Kabisat" << endl;

    cout<<"Masukkan tahunnya : ";
    cin>>tahun;
    cout<<"Silahkan pilih pernyataan yang menurut Anda benar"<<endl;
    cout<<"1. Tahun ini adalah Tahun kabisat"<<endl;
    cout<<"2. Tahun ini bukanlah Tahun kabisat"<<endl;
    cout<<"Pilihan yang Anda masukkan adalah :";
    cin>>pilihan;
    switch(pilihan)
case 1 :
   if (tahun%400==0){
        cout<<"kabisat";
    }else if ((tahun%400!=0) && (tahun%100!=0))
    {
               if (tahun%4==0){
        cout<<"kabisat";
        }
    }
     else
        {cout<<"bukan kabisat";
        }

    return 0;

}
