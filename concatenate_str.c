#include<stdio.h>
void concatenate_str(char*,char*);
void main()
{
	char src[100],dest[100];
	printf("Enter the 1st string ; ");
	scanf("%[^\n]s",src);
	printf("enter the 2nd string : ");
	scanf(" %[^\n]s",dest);
	void (*fp)(char*,char*)=concatenate_str;
	fp(src,dest);
}
void concatenate_str(char *src,char* dest)
{
	int i=0,j;
	for(i=0;src[i];i++)
	{}
	for(j=0;dest[j];j++)
	{
		src[i++]=dest[j];
	}
	printf("%s\n",src);
}
