#include<stdio.h>
void count(char *);
void main()
{
	char str[100];
	printf("Enter the string : ");
	scanf("%[^\n]s",str);
	void (*fp)(char *)=count;
	fp(str);
}
void count(char* str)
{
	int i,num=0,alpha=0,spl=0;
	for(i=0;str[i];i++)
	{
		if(((str[i]>=65)&&(str[i]<=90))||((str[i]>=97)&&(str[i]<=122)))
			alpha++;
		else if((str[i]>=48)&&(str[i]<=57))
			num++;
		else 
			spl++;
	}
	printf("alphabets : %d\nnumbers : %d\nspl chars : %d\n",alpha,num,spl);
}
