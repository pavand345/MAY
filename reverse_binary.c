#include<stdio.h>
void reverse_bin(int data);
void main()
{
	int num,pos;
	printf("Enter the number : ");
	scanf("%d",&num);

	void(*fp)(int)=reverse_bin;

	printf("Binary printing for %d\n",num);
	for(pos=31;pos>=0;pos--)
	{
		if(pos==7||pos==15||pos==23)
			printf(" ");//for every 8 bits one space.

		printf("%d",(num>>pos)&1);
	}
	printf("\n");
	fp(num);
}
void reverse_bin(int data)
{
	int i,j,pos;
	for(i=31,j=0;i>j;i--,j++)
	{
		if(((data>>i)&1)!=((data>>j)&1))
		{
			data=data^(1<<i);
			data=data^(1<<j);
		}
	}
	
	//binary printing

	for(pos=31;pos>=0;pos--)
	{
		if(pos==7||pos==15||pos==23)
			printf(" ");//for every 8 bits one space.

		printf("%d",(data>>pos)&1);
	}
	printf("\nThe data for above binary = %d\n",data);
}
