#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"==========  PROGRAM MENENTUKAN BILANGAN TERKECIL ==========";
	cout<<endl;
	cout<<"Masukkan bilangan pertama : ";
	cin>>a;
	cout<<"Masukkan bilangan kedua : ";
	cin>>b;
	cout<<"Masukkan bilangan ketiga : ";
	cin>>c;
	cout<<endl;

	//Percabangan if else //

	if(a<b){
		cout<< a <<"Adalah Bilangan Terkecil";
		cout<<endl;

	}
	else if(b<c){
		cout<< b <<"Adalah Bilangan Terkecil";
		cout<<endl;

	}
	else{
		cout<< c <<"Adalah Bilangan Terkecil";
		cout<<endl;

	}
	return (0);

}