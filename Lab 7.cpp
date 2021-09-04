//Lab 7
//Write a C program that reads a number and tests whether it is palindorme or not
#include<stdio.h>
int main()
{
	int n,d,r=0,m;
	printf("Enter any number.\n");
	scanf("%d",&n);
	m=n;
	while (n>0)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	if(m==r)
	printf("The number is palindrome.");
	else
	printf("The number is not palindrome.");
}
