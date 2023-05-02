#include<stdio.h>
char str_length(char*);
void main()
{
	char str[100];
	printf("Enter the string : ");
	scanf("%[^\n]s",str);
	char (*fp)(char*)=str_length;
	fp(str);
}
char str_length(char *str)
{
	int i=0;
	for(i=0;str[i];i++)
	{}
	printf("strlen=%d\n",i);
}
