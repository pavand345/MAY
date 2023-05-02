#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter the string : ");
	scanf("%[^\n]s",str);
	int len=strlen(str),i;
	for(i=0;i<len/2;i++)
	{
	/*	str[i]^=str[len-i-1];
		str[len-i-1]^=str[i];
		str[i]^=str[len-i-1];*/


	/*	str[i]+=str[len-i-1];
                str[len-i-1]=str[i]-str[len-i-1];
                str[i]-=str[len-i-1];*/

	//	str[i]=(str[i]+str[len-i-1])-(str[len-i-1]=str[i]);
		
		int temp;	

		temp=str[i];
             	str[i]=str[len-i-1];
              	str[len-i-1]=temp;

	/*	printf("%c %c\n",str[i],str[len-i-1]);
		str[i] = (str[i]*str[len-i-1]);
		str[len-i-1] = (str[i]/str[len-i-1]);
		str[i] = (str[i]/str[len-i-1]);
		printf("%c %c\n",str[i],str[len-i-1]); */
	}
	printf("%s\n",str);
}
