#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void insert(int);
void display();
void delete_val(int);
struct node *head=NULL;
void main()
{
    int val,opt,dval;
	do 
	{
		printf("\n1.insert");
		printf("\n2.delete");
		printf("\n3.display");
		printf("\n4.exit");
		printf("\nEnter your choise ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				   printf("\nenter element ");
				   scanf("%d",&val);
				   insert(val);
				   break;
			case 2:
				   printf("\nenter element which you want to delete ");
				   scanf("%d",&dval);
				   delete_val(dval);
				   break;
		    case 3:
		    	   display();
		    	   break;
		}
	}
	while(opt!=5);	
}
void insert(int val)
{
	struct node *prev;
	struct node *curr;
	struct node *newnode;
	newnode=(struct  node*)malloc(sizeof(struct node*));
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL || val<head->data)
	{
		newnode->next=head;
		head=newnode;
		printf("\nnode insert.");
	}
	else
	{
		prev=NULL;
		curr=head;
		while(curr!=NULL && curr->data<=val)
		{
			prev=curr;
			curr=curr->next;
		}
		prev->next=newnode;
		newnode->next=curr;
		printf("\nnode insert..");
		
	}
}
void display()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("\nlinklist is empty ");
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf(" %d ",temp->data);
			//printf("add %d ",temp->next);
			temp=temp->next;
		}
	}
}
void delete_val(int dval)
{
	struct node *curr,*prev;
	prev=NULL;
	curr=head;
	while( curr!=NULL && curr->data!=dval)
	{
			prev=curr;
			curr=curr->next;
	}
	if(curr==NULL)
	{
		printf("\nelement not found");
		return;
	}
	
	else
	{
     	if(prev==NULL)
     	{
	    	head=curr->next;
	    	printf("\n%d is remove from the linklist ",curr->data);
			free(curr);
		}
		else
		{
			prev->next=curr->next;
			printf("\n%d is remove from the linklist ",curr->data);
			free(curr);
		}
	}
}
