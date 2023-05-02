#include<stdio.h>
void count(char*);
void main()
{
	char str[100];
	printf("Enter the string : ");
	scanf("%[^\n]s",str);
	void (*fp)(char *)=count;
	fp(str);
}
void count(char *str)
{
	int i,vowel=0,alpha=0;
	for(i=0;str[i];i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
			vowel++;
		else if(((str[i]>=65)&&(str[i]<=90))||((str[i]>=97)&&(str[i]<=122)))
			alpha++;
		else 
			continue;
	}
	printf("No.of Vowels in string : %d\nNo.of consonanta in string : %d\n",vowel,alpha);
}


