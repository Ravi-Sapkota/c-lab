//Write a C program that prints first 30 fibonacci numbers using user defined function
#include<stdio.h>
int fibo(int n);
int main(void)
{
	printf("The firse 30 fibonacci numbers are:\n");
	for(int i=1;i<=30;i++)
		printf("%d ", fibo(i));
}
int fibo(int n)
{
	if(n<=1)
		return n;
	else
		return fibo(n-1)+fibo(n-2);
}
