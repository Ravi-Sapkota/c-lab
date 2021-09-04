//Lab 14 (2021/06/04)
//Wrire a c program that reads given 10 numbers and finds sum of square of each number
#include<stdio.h>
#define N 10
int main()
{
	int a[N],i,sq,sum=0;
	printf("Enter any 10 numbers here: ");
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<N;i++)
	{
		sum=sum+a[i]*a[i];
	}
	printf("The sum of square of given %d numbers is %d.",N,sum);
}
