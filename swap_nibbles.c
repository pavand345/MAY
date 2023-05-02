#include<stdio.h>
void swap_nibbles(int num);
int main()
{
	int data;
	printf("Enter the number : ");
	scanf("%d",&data);
	void (*fp)(int) = swap_nibbles;
	fp(data);
}
void swap_nibbles(int num)
{
	num=(((num & 0x0F)<<4) | ((num & 0xF0)>>4));
	printf("%d\n",num);
}
