/*
Lab 1
2021/05/13 Thursday
Write a program that reads a number and tests whether it is multiple of 7 or not.*/
#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter a number\n");
    scanf("%d", &n);
    r=n%7;
    if(r==0)
    printf("The number %d is multiple of 7.",n);
    else
    printf("The number %d is not multiple of 7",n);
    return 0;
}
