//Lab 5
//Write a c program that reads a number and finds sum of its digits
#include <stdio.h>
int main()
{
	int n,d,s=0,m;
	printf("Enter any number\n");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		d=n%10;
		s=s+d;
		n=n/10;
	}
	printf("The sum of %d is %d.",m,s);
}
