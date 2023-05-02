#include<stdio.h>
#include<stdlib.h>
void calculator(float (*fp)(float,float),float a, float b)
{
	float value = fp(a,b);
	printf("value =%f\n",value);
}

void (*fcalculator)(float (*fp)(float,float),float a, float b)= calculator;
float sum(float a,float b){ return (a+b); }
float sub(float a,float b){ return (a-b); }
float mul(float a,float b){ return (a*b); }
float divi(float a,float b)
{ 
	if(b==0)
	{
		printf("div cannot be 0\n");
		exit(0);
	}
	return (a/b);
}
int main()
{
	int n;
	printf("Enter the choice 0)add 1)sub 2)mul 3)div\n");
	scanf("%d",&n);
	printf("enter the value : ");
	float a,b;
	scanf("%f%f",&a,&b);
	switch(n)
	{
		case 0 : fcalculator(sum,a,b);
			 break;
		case 1 : fcalculator(sub,a,b);
			 break;
		case 2 : fcalculator(mul,a,b);
			 break;
		case 3 : fcalculator(divi,a,b);
			 break;
	}
}

