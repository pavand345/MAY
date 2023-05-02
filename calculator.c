#include<stdio.h>
#define ops 4
float sum(float a,float b){ return (a+b); }
float sub(float a,float b){ return (a-b); }
float mul(float a,float b){ return (a*b); }
float div(float a,float b)
{ 
	if(b==0)
	{
		printf("div cannot be 0");
	}
	return (a/b);
}
int main()
{
	float (*fp[ops])(float,float)={sum,sub,mul,div};
	int ch;
	printf("enter the choice\n0.sum\t1.sub\t2.mul\t3.div\n");
	scanf("%d",&ch);
	printf("enter the value : ");
	float a,b;
	scanf("%f%f",&a,&b);
	printf("%f\n",fp[ch](a,b));
	return 0;
}

