//2021-08-13
//Write a c program that reads two 3*3 matrices and finds their sum using pointers.
#include <stdio.h>
void read(int m[3][3])
{
    int i, j;
    printf("Enter elements of 3*3 matrix (row-wise)\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", (*(m + i) + j));
        }
    }
}
void display(int m[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", *(*(m + i) + j));
        }
        printf("\n");
    }
}
void add(int m1[3][3], int m2[3][3], int m3[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            *(*(m3 + i) + j) = *(*(m1 + i) + j) + *(*(m2 + i) + j);
        }
    }
}
int main()
{
    int m1[3][3], m2[3][3], m3[3][3];
    printf("Read matrix 1\n");
    read(m1);
    printf("Read matrix 2\n");
    read(m2);
    printf("Adding two matrices.....\n");
    add(m1, m2, m3);
    printf("First Matrix\n");
    display(m1);
    printf("Second matrix\n");
    display(m2);
    printf("The sum matrix\n");
    display(m3);
}