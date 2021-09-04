//Lab 10
//2021/05/27
//Write a c program that reads cofficent of quadritc equation and finds its root
#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,d,r1,r2;
	printf("Enter coefficients in terms of a,b,c\n");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if (d<0)
	printf("No real roots for given equation.");
	else
	{
		d=sqrt(d);
		r1=(-b-d)/(2*a);
		r2=(-b+d)/(2*a);
		printf("%0.2f and %0.2f are the roots for the given coefficient of quadratic equation.",r1,r2);
	}
}
