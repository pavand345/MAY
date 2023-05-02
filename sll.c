#include<stdio.h>
#include<stdlib.h>
void print();
void input();
struct node
{
	int data;
	struct node *link;
}*head;
int main()
{
	input();
	print();
}
void input()
{
	struct node *newnode,*temp;
	head=NULL;
	int i,data,n;
	printf("Enter the no .of node : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		if(head==NULL)
		{
			head=malloc(sizeof(struct node));

			printf("Enter the data : ");
			scanf("%d",&(head->data));

			head->link=NULL;
			temp=head;
		}
		else
		{
			newnode=malloc(sizeof(struct node));

			printf("Enter the data : ");
			scanf("%d",&(newnode->data));
			newnode->link=NULL;

			temp->link=newnode;
			temp=temp->link;
		}
	}
}
void print()
{
	if(head==NULL)
		printf("list is empty\n");
	else
	{
		struct node *ptr;
		ptr=head;
		while(ptr)
		{
			printf("%d\n",ptr->data);
			ptr=ptr->link;
		}
	}
}
