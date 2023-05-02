#include<stdio.h>
#include<stdlib.h>
struct node *input(struct node *head);
void display(struct node *ptr);
struct node *rev_sll(struct node *ptr);
struct node
{
	int data;
	struct node *link;
};
int main()
{
	struct node *head=NULL;
	int ch;
	while(1)
	{
		printf("1.input\n2.display\n3.rev_sll\n4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:head=input(head);
			       break;
			case 2:display(head);
			       break;
			case 3:head=rev_sll(head);
			       break;
			case 4:return 0;
		}
	}
}
struct node *input(struct node *head)
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
	return head;
}
void display(struct node *ptr)
{
	if(ptr==NULL)
		printf("list is empty\n");
	else
	{
		while(ptr)
		{
			printf("%d\n",ptr->data);
			ptr=ptr->link;
		}
	}
}
struct node *rev_sll(struct node *ptr)
{
	struct node *prev=NULL,*curr=NULL,*next=NULL;

	if(ptr==NULL)
		printf("Linked list is empty\n");
	else if(ptr->link==NULL)
		printf("list is having single node only\n");
	else
	{
		next=ptr;
		while(next!=NULL)
		{
			prev=curr;
			curr=next;
			next=next->link;
			curr->link=prev;
		}
		ptr=curr;
	}
	return ptr;
}
