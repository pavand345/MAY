/*Count the number of flipped bits
      7654 3210
      |||| ||||
  5 = 0000 0101
  6 = 0000 0110
  the 0 and 1 bits are different so cnt will be 2 */



#include<stdio.h>
int main()
{
	int a,b,c,i,cnt=0;
	printf("Enter the a and b value\n");
	scanf("%d%d",&a,&b);
	c=a^b;
	for(i=31;i>=0;i--)
	{
		if((c&(1<<i))!=0)
			cnt++;
	}
	printf("The no of flipped bits are = %d\n",cnt);
}
