//Lab 13
//Write a c program that checks if the array contains duplicate element.
#include<stdio.h>
#define N 10
int main()
{
	int x[N]={101,20,110,30,70,22,38,67,54,10};
	int i,t=0,j;
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(x[i]==x[j])
			{
				t=1;
				break;
			}
		}
	}
	if(t==1)
	printf("Array contains duplicate element.");
	else
	printf("Array doesn't contain duplicate element.");
}
