//Lab 4
//Write a c program that reads a number and tests whether it is prime or composite.
#include <stdio.h>
int main()
{
	int n,c=0,i=1;
	printf("Enter any number:\t",n);
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		c++;
		
		i++;
	}
	if(c==1)
	printf("Number is neither prime nor composite.");
	else if(c==2)
	printf("Number is prime.");
	else
	printf("Number is composite.");
}
