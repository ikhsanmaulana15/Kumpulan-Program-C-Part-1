#include <iostream>
using namespace std;


int i,a,b;
int main()
{	int i,a,b;
	cout<<"Program Membuat Bentuk Segitiga"<<endl;
	
	cout<<"Masukkan Jumlah Baris : ";
	cin>>i;

	for (b=1; b<=i; b++)
	{
		for(a=i; a>=b; a--)
		{
			cout<<"#";
		}
	
			cout<<endl;
	}
return (0);

}
