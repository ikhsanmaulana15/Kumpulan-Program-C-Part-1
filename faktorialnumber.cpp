#include <stdio.h>
int main ()

{
	int n,i;
	unsigned long long factorial = 1;

	printf("Masukkan nilai : ");
	scanf("%d",&n);

	if (n<0)
		printf("Error!!! factorial untuk nilai negatif tidak ditemukan.");
	else
	{
		for(i=1; i<=n; ++i)
		{
			factorial *= i;
		}
		printf("Factorial dari %d = %llu", n, factorial); 
	}

	return (0);
}