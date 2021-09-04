//Lab 6
//Write a program that reads a number and finds its reverse(123-->321)
//2021/05/21
#include<stdio.h>
int main()
{
	int n,r=0,i,d;
	printf("Ener any number.\n");
	scanf("%d",&n);
	i=n;
	while(n>0)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	printf("The reverse number of %d is %d.",i,r);
}
