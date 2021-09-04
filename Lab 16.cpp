//ab 16 2021/06/10
//Write a c program to find the sum, difference and product of two 3*3 matrices.
#include<stdio.h>
int main(void)
{
	int i,j,k,s=0;
	int m1[3][3],m2[3][3],sum[3][3],d[3][3],p[3][3];
	printf("Enter elements of first 3*3 matrix (row-wise)\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
    printf("Enter elements of second 3*3 matrix (row-wise)\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
     
	 // computing and diff
	 for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j] = m1[i][j]+m2[i][j];
			d[i][j] = m1[i][j]-m2[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
	     for(j=0;j<3;j++)
		 {
		 	s=0;
		 	for(k=0;k<3;k++)
		 	{
		 		s = s+m1[i][k]*m2[k][j];
			 }
			 p[i][j]=s;
		}	
	}
	
	printf("The sum matrix\n");
	for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	   {
	       printf("%d ",sum[i][j]);	
	   }
	   printf("\n");	
	}	
	printf("The diff matrix\n");
	for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	   {
	       printf("%d ",d[i][j]);	
	   }
	   printf("\n");	
	}		
	printf("The product matrix\n");
	for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	   {
	       printf("%d ",p[i][j]);	
	   }
	   printf("\n");	
	}	
 }
