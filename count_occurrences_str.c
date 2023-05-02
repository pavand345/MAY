/*Write a C program to count occurrences of a character in given string. 
 * enter the str : hello world
 * enter the char to be searched : l
 * output : char e occurs 3 times */

#include<stdio.h>
void fun(char *str,char ch);
void main()
{
	char str[100],ch;
	printf("enter the string : ");
	scanf("%[^\n]s",str);

	printf("enter the char to be searched : ");
	scanf(" %c",&ch);

	void (*fp)(char *,char)=fun;
	fp(str,ch);
}
void fun(char *str,char ch)
{
	int i,cnt=0;
	for(i=0;str[i];i++)
	{
		if(str[i]==ch)
			cnt++;
	}
	printf("char %c occurs %d times\n",ch,cnt);
}
