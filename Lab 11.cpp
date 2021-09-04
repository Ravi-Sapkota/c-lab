//Lab 11(2021/06/03)
//write a c program that reads 10 numbers and sort them in ascending order
//sorting: It is the technique of arranging data in ascending or decending in order.
#include <stdio.h>
#include <conio.h>
#define N 10
int main()
{
    int x[N], i, t, j;
    printf("Enter %d numbers:\n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("Number you entered is :");
    for (i = 0; i < N; i++)
    {
        printf(" %d", x[i]);
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
            }
        }
    }
    printf("\nNumber after sorting is ");
    for (i = 0; i < N; i++)
    {
        printf(" %d", x[i]);
    }
}
/*
Bubble sort
Logic: Compare adjacent numbers and swanp if they are out of order.
For     1 6 5 2 0 
Step 1: 1 5 2 0 6
Step 2: 1 2 0 5 6
Step 3: 1 0 2 5 6
Step 4: 0 1 2 5 6
That is req order 
*/
