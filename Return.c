#include<stdio.h>

int Display()
{
    return 11;
}

int main()
{
    int Ret = 0;        // Rekami pishivi

    Ret = Display();    // Rekami pishivi

    printf("%d\n", Ret);


    return 0;
}