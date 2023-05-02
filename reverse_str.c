/* Write a C program to find reverse of a string. 
 * enter the string : abcde
 * output	    : edcba */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse_temp(char *str);
void reverse_bitwise(char *str);
void reverse_arithmetic(char *str);
void reverse_mul_div(char *str);
void main()
{
	char str[100];
	int choice;
	printf("enter the str : ");
	scanf(" %[^\n]s",str);

	printf("0.using temp variable\n");
	printf("1.using bit_wise operators\n");
	printf("2.using arthimetic operators\n");
	printf("3.using multiplication and division\n");
	printf("please select the option : ");
	scanf(" %d",&choice);

	if(choice!=1&&choice!=2&&choice!=3&&choice!=0)
	{
		printf("wrong option\n");
		exit(0);
	}

	printf("\nbefore modifying str is : %s\n\n",str);
	void (*fp[4])(char *)={reverse_temp,reverse_bitwise,reverse_arithmetic,reverse_mul_div};
	fp[choice](str);
}
void reverse_temp(char *str)
{
	int i,len=strlen(str),temp;
	for(i=0;i<=len/2;i++)
	{					//using temp variable
		temp=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=temp;
	}
	printf("reversed str is : %s\n",str);
	exit(0);
}
void reverse_bitwise(char *str)
{
	int i,len=strlen(str),temp;
	for(i=0;i<len/2;i++)
	{					//using bitwise operators
		str[i]^=str[len-i-1];
		str[len-i-1]=str[i]^str[len-i-1];
		str[i]^=str[len-i-1];
	}
	printf("reversed str is : %s\n",str);
	exit(0);
}
void reverse_arithmetic(char *str)
{
	int i,len=strlen(str),temp;
	for(i=0;i<len/2;i++)
	{					//using arithmetic operators
		str[i]+=str[len-i-1];
		str[len-i-1]=str[i]-str[len-i-1];
		str[i]-=str[len-i-1];
	}
	printf("reversed str is : %s\n",str);
}

void reverse_mul_div(char *str)
{
	int i,len=strlen(str),temp;
	for(i=0;i<len/2;i++)
	{						//cannot do with the division.
		str[i]=str[i]*str[len-i-1];
		str[len-i-1]=str[i]/str[len-i-1];
		str[i]=str[i]/str[len-i-1];
	}
	printf("reversed str is : %s\n",str);
}

