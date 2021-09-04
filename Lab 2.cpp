/*
Lab 2
Write a C program that reads marks in 5 subjects of a student and then test whether the sutdent is fail or pass
2021/05/13
*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e,t;
	printf("Enter the marks obtained in C-program\n");
	scanf("%d", &a);
	
	printf("Enter the marks obtained in Digital Logic\n");
	scanf("%d", &b);
	
	printf("Enter the marks obtained in Physics\n");
	scanf("%d", &c);
	
	printf("Enter the marks obtained in Mathematics\n");
	scanf("%d", &d);
	
	printf("Enter the marks obtained in IIT\n");
	scanf("%d", &e);
	if(a>=100||b>=100||c>=100||d>=100||e>=100)
	printf("Invalid data");
	else
	{
	if(a<40||b<40||c<40||d<40||e<40)					//if(a>=40&&b>=40&&c>=40&&d>=40&&e>=40)
	printf("Student is fail");
	else
	printf("Student is pass");
	}
	
	return 0;
}
