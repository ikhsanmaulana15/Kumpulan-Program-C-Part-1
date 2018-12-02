#include <iostream>
using namespace std;
int main()
{
	char nilai;
	printf("Masukkan Nilai Huruf \t: ");
	scanf("%s", &nilai);

	switch(nilai)
{
	case 'A':
	printf("Nilai Angka 9-10\n");
	break;
	case 'B':
	printf("Nilai Angka 8-8.9\n");
	break;
	 case 'C':
    printf("Nilai Angka 7-7.9\n");
    break;   
   case 'D':
    printf("Nilai Angka 6-6.9\n");
    break;   
   case 'E':
    printf("Nilai Angka 5-5.9\n");
    break;
    default :
    printf("EROR GUYS");
}
return 0;

}