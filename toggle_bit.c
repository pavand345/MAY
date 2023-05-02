/* Toggle bit */


#include<stdio.h>
int main()
{
	int num,pos;
	printf("enter the number and position : \n");
	scanf("%d%d",&num,&pos);
	num^=(1<<pos);
	printf("%d\n",num);
}
