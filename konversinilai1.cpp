#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[])
 {
 float p;
 cout<<"Program Konversi Nilai:"<<endl;
 cout<<"Masukkan Nilai Yang Diperoleh : ";
 cin>>p;
 if(p>=90 && p==100)
 cout<<"A";
 else
     if(p>=80 && p<=89)
       cout<<"B";
     else
         if(p>=70 && p<=79)
           cout<<"C";
         else
             if(p>=60 && p<=69)
               cout<<"D";
             else
                cout<<"E";
 
 return 0;
}
