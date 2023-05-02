#include<stdio.h>
int add(int a,int b);
void main()
{
	int a,b;
	printf("enter the two numbers for add \n");
	scanf("%d%d",&a,&b);

	int (*fp)(int,int)=add;

	printf("%d + %d = %d\n",a,b,fp(a,b));
}
int add(int a,int b)
{
	int carry=(a&b)<<1;
	int result=a^b;
	if(carry==0)
		return result;
	else
		add(carry,result);
}
