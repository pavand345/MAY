/*Largest word in a given string*/




#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter the string : ");
	fgets(str,100,stdin);
	char l_word[10][10],large[10],small[10];
	int i=0,j=0,k=0,len=0,size;

	for(k=0;str[k];k++)
	{
		if(str[k]!=' ' && str[k]!='\0')
		{
			l_word[i][j++]=str[k];   
		}

		else 
		{
			l_word[i][j]='\0';
			i++; 
			j=0; 
		}
	}
	len=i;
	strcpy(large,l_word[0]);
	strcpy(small,l_word[0]);
	for(k=0;k<=len;k++)
	{
		if(strlen(large)<strlen(l_word[k]))
		{
			strcpy(large,l_word[k]);
		}

		if(strlen(small)>strlen(l_word[k]))
		{
			strcpy(small,l_word[k]);
		}
	}
	printf("Largest word in a given string :  %s\n",large);
//	printf("length of largest word is         %d\n",size);
	printf("smallest word in a given string : %s\n",small);
//	printf("length os smallest word is :      %ld\n",strlen(small));
}
