#include<stdio.h>
#include<string.h>
void rev_vowel(char *str);
void main()
{
	void (*fp)(char *)=rev_vowel;
	char str[100];
	printf("Enter the string : ");
	scanf("%[^\n]s",str);
	fp(str);
}
void rev_vowel(char *str)
{
	int i,len=strlen(str)-1,temp;
	for(i=0;i<=len;i++)
	{
		int flag=0;
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			for(len;len;len--)
			{
				if(str[len]=='a'||str[len]=='e'||str[len]=='i'||str[len]=='o'||str[len]=='u')
				{
					flag=1;
					break;
				}
				if(flag==1)
					break;
			}
			if(flag==1)
			{
				temp=str[i];
				str[i]=str[len];
				str[len]=temp;
			}
		}
	}
	printf("%s\n",str);
}

