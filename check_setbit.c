// check if the ith bit is set or not


#include<stdio.h>
int main()
{
       int data,bit;
	printf("enter the number : ");
 	scanf("%d",&data);
	printf("enter the position : ");
	scanf("%d",&bit);
	if(((data>>bit)&1)==1)
		printf("%d bit is set\n",bit);
	else
		printf("%d bit is clear\n",bit);
	return 0;
}	
