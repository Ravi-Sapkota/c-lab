//Lab 34: Write a C program that stores 20 numbers to file "number.txt" and then read these numbers from the file and display only prime numbers to monitor
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define N 5
int isPrime(int n)
{
    int i, t = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            t++;
        }
    }
    if (t == 2)
        return 1;
    else
        return 0;
}
int main()
{
    FILE *fp;
    int i, n;
    fp = fopen("D:\\Problem Solving\\numbers.txt", "w");
    if (fp == NULL)
    {
        printf("File cannot be created\n");
        exit(0);
    }
    else
    {
        printf("File created\n");
        printf("Enter %d numbers to be stored\n", N);
        for (int i = 1; i <= N; i++)
        {
            scanf("%d", &n);
            fprintf(fp, "%d ", n);
        }
        fclose(fp);
    }
    fp = fopen("D:\\Problem Solving\\number.txt", "r");
    if (fp == NULL)
    {
        printf("File cannot be opened\n");
        exit(0);
    }
    else
    {
        printf("File opened\n");
        for (int i = 0; i <= N; i++)
        {
            fscanf(fp, "%d", &n);
            if (isPrime(n))
            {
                printf("%d ", n);
            }
        }
    }
}
