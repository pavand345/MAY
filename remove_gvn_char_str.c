 /* Write a C program to remove all occurrences of a character from string.
  * Enter the string	     : hello world
  * Enter the char that you want to remove : l
  *
  * output 		     : heo word */

#include<stdio.h>
#include<string.h>
void fun(char *str,char ch);
void main()
{
	char str[100],ch;
	printf("Enter the string : ");
	scanf("%[^\n]s",str);

	printf("Enter the char that you want to remove : ");
	scanf(" %[^\n]s",&ch);

	printf("Before modifying the string is : %s\n",str);
	void (*fp)(char *,char)=fun;
	fp(str,ch);
	printf("after the modifying string is : %s\n",str);
}
void fun(char *str,char ch)
{
	int i;
	for(i=0;str[i];i++)
	{
		if(str[i]==ch)
		{
			memmove(str+i,str+i+1,strlen(str)+1);
			i--;
		}
	}
}
