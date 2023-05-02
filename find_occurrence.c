/* Write a C program to find first occurrence of a word in a given string. 
 * sample input : my name is pavan kumar
 * 	   word : name
 * ouput        : we found "name" at position 4 */

#include<stdio.h>
#include<string.h>
void fun(char *str,char *str2);
void main()
{
	char s[100],s2[20];
	printf("Enter the string : ");
	scanf("%[^\n]s",s);

	printf("Enter the word : ");
	scanf(" %[^\n]s",s2);

	void (*fp)(char *,char *)=fun;
	fp(s,s2);
}
void fun(char *str,char *str2)
{
	int i,j,k,flag=0,len;
	len=strlen(str2);
	for(i=0;str[i];i++)
	{
		if(str[i]==str2[0])
		{
			k=i;
			for(j=0;str2[j];j++)
			{
				if(str[k++]==str2[j]);
					continue;
			}
			if(j==len)
			{
				printf("we found '%s' at position %d \n",str2,i);
				return;
			}
		}
	}
		printf("%s not found in %s\n",str2,str);
}

