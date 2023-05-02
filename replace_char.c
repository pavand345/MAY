/* Write a C program to replace all occurrences of a (character with another) in a string. */


#include<stdio.h>
void replace_char(char *str,char ch,char re);
void main()
{
	char str[100],ch,re;

	printf("Enter the string : ");
	scanf("%[^\n]s",str);

	printf("Enter a char want to replce : ");
	scanf(" %c",&ch);

	printf("replace with : ");
	scanf(" %c",&re);

	printf("\nBefore modifying the string : %s",str);

	void (*fp)(char *,char,char)=replace_char;
	fp(str,ch,re);
	printf("\nAfter modifying the string : %s\n",str);
}
void replace_char(char *str,char ch,char re)
{
	int i;
	for(i=0;str[i];i++)
	{
		if(str[i]==ch)
			str[i]=re;
	}
}
