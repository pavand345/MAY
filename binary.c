/* To print binary number */



#include<stdio.h>
int main()
{
	int num,bit;
	printf("Enter the Digit : ");
	scanf("%d",&num);
	for(bit=31;bit>=0;bit--)
		printf("%d",(num>>bit)&1);
	printf("\n");
}
