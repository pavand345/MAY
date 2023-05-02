/*Write a C program to check whether a string is palindrome or not.*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void palindrome(char *str);
void main()
{
	char str[100];
	void (*fp)(char *)=palindrome;
	printf("Enter the string : ");
	scanf("%[^\n]s",str);

	fp(str);
}
void palindrome(char *str)
{
	int i,len;
	len=strlen(str);
	for(i=0;i<len/2;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			printf("%s is not palindrome\n",str);
			exit(0);
		}
	}
	printf("%s is palindrome\n",str);
}
