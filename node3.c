#include<stdlib.h>
#include<conio.h>

struct node
{
	int val;
	struct node *next;
};
void insert_val(struct node* ,int,struct node*);
int main()
{
	int value;
	struct node *top = NULL;
	struct node *cur = NULL;
  	struct node *n;
  	printf("enter value ");
  	scanf("%d",&value);
  	insert_val(*top,*n,cur,value);
	return 0;
}
void insert_val(struct node *top,struct node *n,int value,struct node *cur,int value)
{
	
	if(top==NULL)
	{
      n=(struct node*)malloc(sizeof(struct node));
	  n->val=value;
	  n->next=cur;
	  top->next=n;
	  printf("\ninsert");
	}
	else
	{
	    n=(struct node*)malloc(sizeof(struct node));
		n->val=value;
		n->next=cur;
		cur->next=n;
	    printf("\ninsert");
	
		
	}

	
}
