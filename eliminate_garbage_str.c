/* Write a C program to eliminate garbage values from the sentence.*/




#include<stdio.h>
#include<string.h>
void garbage(char *str);
int main()
{
	char str[100];
	printf("Enter the string : ");
	scanf("%[^\n]s",str);
	void (*fptr)(char *)=garbage;
	fptr(str);
}
void garbage(char *str)
{
	int i;
	for(i=0;str[i];i++)
	{
		if((((str[i]>=65)&&(str[i]<=90))||((str[i]>=97)&&(str[i]<=122))||(str[i]==32))!=1)
		{
			memmove(str+i,str+i+1,strlen(str+i+1)+1);
			i--;
		}
	}
	printf("%s\n",str);
}
