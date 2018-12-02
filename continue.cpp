#include <iostream>
#include <stdio.h>

int main()
{
	int jum_data = 0;
	int nomor =1 ;
	float total_nilai = 0;
	float nilai, rata_rata;

	while(1)
	{
		printf("Data Ke-%d : ", nomor);
		scanf("%f", &nilai);

		if(nilai >20)
			continue;

		if(nilai < 0 )
		{
			jum_data= nomor -1;
			rata_rata= total_nilai / jum_data;
			break;

		}
		total_nilai += nilai;
		nomor++;
	}
		printf("Jumlah data =%d\n", jum_data);
		printf("Rata-rata = %g\n",rata_rata);

		return(0);
}

	