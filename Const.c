#include<stdio.h>

int main()
{
   int i = 10;
   const int j = 10;

   i++;     // Allow
   j++;     //Not allow (bcz of const)




    return 0;
}