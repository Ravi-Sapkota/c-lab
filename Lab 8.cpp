//Lab 8
//Write a C program that reads a number and finds sum of cubes of digit
#include<stdio.h>
int main()
{
	int n,d,s=0;
	printf("Enter any number.\n");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		s=s+d*d*d;
		n=n/10;
	}
	printf("The sum of cubes of digits is %d.",s);
}

//Armstrong Number:1,153,370,371,407
