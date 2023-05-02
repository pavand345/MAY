/* reverse string */


#include<stdio.h>
#include<string.h>
void reverse(char *);
int main()
{
	char str[100];
	printf("Enter the string : ");
	scanf("%[^\n]s",str);
	void (*FPTR)(char *)=reverse;
	FPTR(str);
}
void reverse(char *str)
{
	int len=strlen(str)-1,i,j;
	char temp;
	for(i=0,j=len;i<j;i++,j--)
	{
		str[i]^=str[j]^=str[i]^=str[j];
	//	temp=str[i];
	//	str[i]=str[len-i];
	//	str[len-i]=temp;
	}
	printf("reverse string is : %s\n",str);
}
