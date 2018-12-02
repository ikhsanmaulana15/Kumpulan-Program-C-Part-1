#include<stdio.h>
#include <iostream>
using namespace std;
int main()

{
    int T;
     printf("Ketikkan suhu benda : ");
     scanf("%d",&T);
     if(T<=0)
     printf("Wujud zat Beku ");
     else
     {
           if (T<100)
           printf("Wujud zat Cair");
           else
           printf("Wujud Zat Gas/Uap\n");
     }
     return 0;

}
