//Lab 17:
//Write a C program that reads a word and checks whether it is palindrome or not
#include<stdio.h>
int main(void)
{
	char word[20];
	int len=0,i,t=1;
	printf("Enter a word:\n");
	scanf("%s",word);
	for(i=0;word[i]!='\0';i++)
	{
		len=len+1;
	}
	printf("The length of word = %d. ",len);
	for(i=0;i<=len/2;i++)
	{
		if(word[i]!=word[len-1-i])
		{
			t=0;
			break;
		}
	}
	if(t==1)
		printf("The word is palindrome.");
	else
		printf("The word is not palindrome.");
}
