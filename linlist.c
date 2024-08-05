#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void insert(int);
void display();
void delete_node();
struct node *head=NULL;
struct node *temp=NULL;
void main()
{
	int opt,val;
	do
	{
		printf("\n1.insert");
		printf("\n2.delete");
		printf("\n3.display");
		printf("\n4.exit");
		printf("\nenter choise ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				   printf("\nenter the value ");
				   scanf("%d",&val);
				   insert(val);
				   break;
		   case 2:
		   	      delete_node();
		   	      break;
		   case 3:
		   	      display();
		   	      break;
		}
	}
	while(opt!=4);
}
void insert(int val)
{
	struct node *newnode;
	newnode=(struct  node*)malloc(sizeof(struct node*));
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL)
	  {
	  	head=temp=newnode;
	  	printf("\nnode insert.");
	  }
    else
    {
    	temp->next=newnode;
    	temp=newnode;
    	printf("\nnode insert..");
    }
}
void display()
{
	struct node *curr;
	if(head==NULL)
	  printf("linklist is empty");
	else
	 {
	 	curr=head;
	 	while(curr!=NULL)
	 	{
	 		printf("%d ",curr->data);
	 		curr=curr->next;
	 	}
	 }
}
void delete_node()
{
	struct node *curr;
	curr=head;
	if(curr==NULL)
	{
		printf("\nempty");
	}
	else
	{
		head=curr->next;
		printf("%d element remove ",curr->data);
		free(curr);
		
	}
}
