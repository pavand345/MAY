#include<stdio.h>
void fun(int data);
void main()
{
	int data;
	printf("enter the data : ");
	scanf("%d",&data);

	void (*fp)(int)=fun;
	fp(data);
}
void fun(int data)
{
	data=(((data&0x0000000F)<<28)|((data&0xF0000000)>>28));
	printf("%d\n",data);
}
