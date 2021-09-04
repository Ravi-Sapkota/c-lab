//Write a c program that prints prime numbers from 200 to 300 using function
#include<stdio.h>
int prime(int n);
int main(void)
{
	printf("The prime numbers starting form 200 upto 300 are:\n");
	for(int i=200;i<=300;i++)
	{
		int p=prime(i);
		if(p!=-1)
			printf("%d", p);
	}
}
int prime(int n)
{
	int i, c=0;
	for(i=1;i<n;i++)
		if(n%i==0)
			c++;
	if(c==2)
		return n;
	else
		return -1;
}
