#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    double x , y;
    cout<<" PROGRAM KUADRAN KOORDINAT "<<endl;

    cout<<"Masukkan Koordinat ' x ' : ";
    cin>>x;

    cout<<"Masukkan Koordinat ' y ' : ";
    cin>>y;
    
    if(x>=0 && y>=0){
        cout<<"Titik x= "<<x<<" dan Titik y= "<<y<<endl;
        cout<<"Berada di KUADRAN I"<<endl;
    }
    else{
        if(x<0 && y>=0){
            cout<<"Titik x= "<<x<<" dan Titik y= "<<y<<endl;
            cout<<"Berada di KUADRAN II"<<endl;
        }
        else{
            if(x<0 && y<0){
                cout<<"Titik x= "<<x<<" dan Titik y= "<<y<<endl;
                cout<<"Berada di KUADRAN III"<<endl;
            }
            else{
                if(x>=0 && y<0){
               cout<<"Titik x= "<<x<<" dan Titik y= "<<y<<endl;
                    cout<<"Berada di KUADRAN IV"<<endl;
                }
                else{
                    cout<<"Anda Salah Memasukkan Nilai "<<endl;
                }
            }
        }
    }

   getch();
}

