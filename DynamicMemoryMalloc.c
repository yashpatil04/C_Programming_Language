#include <stdio.h>
# include <stdlib.h>        //for malloc, calloc and realloc

int main()
{
    int size = 0;
    float *Marks = NULL;
    int i = 0;              //Loop counter

    printf("Enter Number of element:\n");
    scanf("%d", &size);

    //Dynamic Memory allocation
    Marks = (float*) malloc(size * sizeof(float));

    printf("Enter your marks: \n");

    //Iteration
        // 1    2    3
    for(i = 0; i < size; i++)
    {
        scanf("%f", &Marks[i]);        //4
    }

    printf("Entered Marks are : \n");

    // 1    2    3
    for(i = 0; i < size; i++)
    {
        printf("%f \n", Marks[i]);        //4
    }

    free(Marks);

    return 0;
}