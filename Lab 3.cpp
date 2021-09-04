/*
Lab 3
Write a c program that reads two digit number and find its sum of digits  (For example if number is 76 then its sum is 13)
2021/05/13
*/
#include<stdio.h>
int main()
{
	int n,a,b,s;
	printf("Enter any two digit number\n");
	scanf("%d", &n);
	if (n>=100||n<10)
	printf("Please enter two digit number only.");
	else
	{
	a=n/10;
	b=n%10;
	s=a+b;
	printf("The sum of %d is %d",n,s);
	}
	return 0;
}
