/* Write a C program to remove all repeated characters from a given string. */


#include<stdio.h>
#include<string.h>
void fun(char *str);
void main()
{
	char str[100];

	printf("enter the string : ");
	scanf("%[^\n]s",str);

	void (*fp)(char *)=fun;
	fp(str);
	printf("After modifying the str is : %s\n",str);
}
void fun(char *str)
{
	printf("\nBefore modifying str is : %s\n",str);
	int i,j,flag;
	for(i=0;str[i];i++)
	{
		flag=0;
		for(j=i+1;str[j];j++)
		{
			if(str[i]==str[j])
			{
				memmove(str+j,str+j+1,strlen(str)+1);
				j--;
				flag=1;
			}
		}
		if(flag==1)
		{
			memmove(str+i,str+i+1,strlen(str)+1);
			i--;
		}
	}
}
