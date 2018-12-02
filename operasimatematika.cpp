#include <iostream>
#include <conio.h>
using namespace std;

int jumlah()
{
	int a,b;
	cout<<"Operasi Penjumlahan"<<endl;
	cout<<"Masukkan Angka Pertama : ";
	cin>>a;
	cout<<"Masukkan Angka Kedua : ";
	cin>>b;
	cout<<"Hasil : "<<a+b<<endl;
	cout<<endl;
}
int kurang()
{
	int a,b;
	cout<<"Operasi Pengurangan"<<endl;
	cout<<"Masukkan Angka Pertama : ";
	cin>>a;
	cout<<"Masukkan Angka Kedua : ";
	cin>>b;
	cout<<"Hasil : "<<a-b<<endl;
	cout<<endl;
}
int kali()
{
	int a,b;
	cout<<"Operasi Perkalian"<<endl;
	cout<<"Masukkan Angka Pertama : ";
	cin>>a;
	cout<<"Masukkan Angka Kedua : ";
	cin>>b;
	cout<<"Hasil : "<<a*b<<endl;
	cout<<endl;
}
int bagi()
{
	int a,b;
	cout<<"Operasi Pembagian"<<endl;
	cout<<"Masukkan Angka Pertama : ";
	cin>>a;
	cout<<"Masukkan Angka Kedua : ";
	cin>>b;
	cout<<"Hasil : "<<a/b<<endl;
	cout<<endl;
}
int main()
{
	cout<<endl;
	jumlah();
	kurang();
	kali();
	bagi();
	cout<<endl;
	system("pause");
	return 0;
}