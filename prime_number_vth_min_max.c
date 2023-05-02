#include<stdio.h>
int prime(int,int);
int main()
{
	int min,max;
	int (*fp)(int,int)=prime;
	printf("Enter the min number : ");
	scanf("%d",&min);
	printf("Enter the max number : ");
	scanf("%d",&max);
	fp(min,max);
	return 0;
}
int prime(int min,int max)
{
	printf("The prime numbers are : ");
	int i,cnt=0;
	for(min;min<=max;min++)
	{
		for(i=1;i<=min;i++)
		{
			if((min%i)==0)
				cnt++;
		}
		if(cnt==2)
			printf("%d ",min);
		cnt=0;
	}
	printf("\n");
}
