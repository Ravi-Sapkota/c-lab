//Lab:9
//Write a C program that prints primes from 200 to 500
#include<stdio.h>
int main()
{
    int i,j,t,p,it=0;
    printf("Prime numbers from 200 to 500\n");
    for(i=200;i<=500;i++)
    {
        p = i;
        t=0;
        for(j=1;j<=p;j++)
        {
            if(p%j==0)
            t=t+1;
            it =it+1;
        }
        if(t==2)
        printf("%d\t",p);
    }
    printf("The value of iteration  = %d",it);
}
