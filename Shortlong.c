#include<stdio.h>

int main()
{
   int i = 11;
   short int j = 11;
   long int k = 11;
   
   printf("size od int : %lu\n", sizeof(i));     //4
   printf("size od short : %lu\n", sizeof(j));   //2
   printf("size od long : %lu\n", sizeof(k));    //8




    return 0;
}