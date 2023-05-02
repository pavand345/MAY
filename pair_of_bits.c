/* pair of set bits */
#include<stdio.h>
int main()
{
	int num,bit,cnt=0;
	printf("Enter the Digit : ");
	scanf("%d",&num);
	for(bit=31;bit>=0;bit--)
	{
		if(((num>>bit)&1)&&(num>>(bit-1)&1))
		{
			cnt++;
			bit--;
		}
	}
	printf("pair of set bits are : %d\n",cnt);
}
