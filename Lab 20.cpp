//Write a c program that reads a number and find its reverse using function
#include<stdio.h>
int reverse(int n);
int main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d", &n);
	printf("The reverse of %d = %d", n, reverse(n));
}
int reverse(int n)
{
	int d, r=0;
	while(n>0)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	return r;
}
