#include <iostream>
using namespace std;

int main()
{	
	int a,b;

	for(a=2; a<100; a++)

	{
		for(b=2; b<= (a/b); b++)

			if(!(a%b))break; // jikafaktor ditemukan berarti bukan prima
			if(b>(a/b)) cout<<a<<"   Adalah bilangan prima\n";
	}
return(0);
}
		