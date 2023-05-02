


#include<stdio.h>
void str_cpy(char*,char*);
void main()
{
	char src[100],dest[100];
	printf("Enter the string : ");
	scanf("%[^\n]s",src);
	void (*fp)(char*,char*)=str_cpy;
	fp(src,dest);
}
void str_cpy(char* src,char* dest)
{
	int i;
	for(i=0;src[i];i++)
	{
		dest[i]=src[i];
	}
	dest[i]='\0';
	printf("%s\n",dest);
}
