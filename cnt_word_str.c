#include<stdio.h>
void count_word(char*);
void main()
{
	char str[100];
	printf("Enter the string : ");
	scanf("%[^\n]s",str);
	void (*fp)(char *)=count_word;
	fp(str);
}
void count_word(char *str)
{
	int i,word=1;
	for(i=0;str[i];i++)
	{
		if(str[i]==32)
			word++;
	}
	printf("No.of words in given string is : %d\n",word);
}
