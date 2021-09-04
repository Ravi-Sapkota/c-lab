//La 12
//Write a c program that searches key element in an array of size 10
#include <stdio.h>
#define N 10
int main()
{
	int x[N]={10,20,40,30,70,22,38,67,54,11};
	int key,i,t=0;
	printf("Which value do you want to check?\n");
	scanf("%d",&key);
	for(i=0;i<N;i++)
	{
		if(key==x[i])
		{
			t=1;
			break;
		}
	}
	if(t==1)
	printf("%d is in the list.",key);
	else
	printf("%d is not in the list.",key);
	
}
