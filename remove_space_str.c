/* replace space with special char $ */


#include<stdio.h>
#include<string.h>
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
	int i,temp;
	for(i=0;str[i];i++)
	{
		if(str[i]==' ')
		{
			i=temp;
		//	memmove(str+i,str+i+1,strlen(str+i+1)+1);
			while(str[i])
			{
				str[i]=str[i+1];
				i++;
			}
			i--;
			i=temp;
		}
	}
	printf("%s\n",str);
}
