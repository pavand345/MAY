#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	p=malloc(100);
	free(p);
	free(p);
	free(p);
}
