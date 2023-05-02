#include<stdio.h>
#include<stdlib.h>
int prime(int );
int main()
{
	int (*fp)(int)=prime;
	int data;
	printf("enter the number : ");
	scanf("%d",&data);
	printf("%d is a prime number\n",fp(data));
	return 0;
}
int prime(int num)
{
	int i,cnt=0;
	for(i=1;i<=num;i++)
	{
		if((num%i)==0)
			cnt++;
	}
	if(cnt==2)
		return num;
	else
		printf("not prime\n");
		exit(0);
}

/*int main()
{
	int min,max,cnt=0;
	printf("enter the min max : ");
	scanf("%d%d",&min,&max);
	printf("%d to %d prime numbers are : ",min,max);
	for(min;min<=max;min++)
	{
		for(int i=1;i<=min;i++)
		{
			if((min%i)==0)
				cnt++;
		}
		if(cnt==2)
			printf("%d ",min);
		cnt=0;
	}
	printf("\n");
	return 0;
}*/
