#include <iostream>
using namespace std;

 struct pecahan 
{ int pb;
       int py;     };

int main(int argc, char *argv[])
{
       pecahan P,Q;
       cout<<"Program Mengubah Pecahan ke Bilangan Bulat"<<endl;
       cout<<"Masukkan Pembilang : ";
       cin>>P.pb;

       cout<<"Masukkan Penyebut : ";
       cin>>Q.py;

       cout<<"\t   "<<(P.pb)<<endl;
       cout<<"\tP = -"<<endl;
       cout<<"\t    "<<(Q.py)<<endl;
       if ("/")
 {
       cout<<" Hasilnya = "<<(P.pb)/(Q.py)<<endl;
 }
 return 0;
}
