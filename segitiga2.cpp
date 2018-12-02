#include <iostream>
using namespace std;

int i,a,b;

int main()
{	
	cout<<"Program Membuat Bentuk Segitiga"<<endl;
	
	cout<<"Masukkan Jumlah Baris : ";
	cin>>i;

	b=0;
	do{
		b++;
		a=i;

		do  {
			cout<<"+";
			a--;
			}
	    
		while(a>=b);
			 cout<<endl;
	}
		while(b<i);
	return (0);

}

			