/* replace space with special char $ */


#include<stdio.h>
void space(char *);
int main()
{
	char str[100];
	printf("Enter the string : ");
	scanf("%[^\n]s",str);
	void (* fptr)(char *) = space;
	fptr(str);
}
void space(char *str)
{
	int i;
	for(i=0;str[i];i++)
	{
		if(str[i]==' ')
			str[i]='|';
	}
	printf("%s\n",str);
}
