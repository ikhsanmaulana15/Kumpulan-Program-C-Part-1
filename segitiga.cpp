#include <iostream>
using namespace std;

int i,a,b;

int main()
{	
	cout<<"Program Membuat Bentuk Segitiga"<<endl;
	
	cout<<"Masukkan Jumlah Baris : ";
	cin>>i;

	b=0;
	while (b<=i)
	{
		b++;
		a=i;

		while (a>=b)
		{
			cout<<"#";
			a--;

		}
		cout <<endl;
	}
return(0);


}