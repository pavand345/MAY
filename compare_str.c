#include<stdio.h>
#include<stdlib.h>
void compare_str(char*,char*);
void main()
{
	char str[100],str2[100];
	printf("Enter the 1st string : ");
	scanf("%[^\n]s",str);
	printf("Enter the 2nd string : ");
	scanf(" %[^\n]s",str2);
	void (*fp)(char*,char*)=compare_str;
	fp(str,str2);
}
void compare_str(char *str,char *str2)
{
	int i=0;
	for(i=0;str[i]&&str2[i];i++)
	{
		if(str[i]!=str2[i])
		{
			printf("not same\n");
			exit(0);
		}
	}
	printf("same\n");
}
