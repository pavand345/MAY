#include<stdio.h>
#include<string.h>
void remove_char(char *str, char ch)
{
	int i;
	for(i=0;str[i];i++)
	{
		if(str[i]==ch)
		{
			memmove(str+i,str+i+1,strlen(str+i+1)+1);
			break;
		}
	}
	printf("%s",str);
}
int main()
{
	void (*fp)(char *,char)=remove_char;
	char str[100],ch;
	printf("enter the string : ");
	scanf("%[^\n]s",str);
	printf("enter the char to remove ");
	scanf(" %c",&ch);
	fp(str,ch);
}
