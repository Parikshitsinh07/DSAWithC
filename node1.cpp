#include<stdio.h>
#include<stdlib.h>
void insert_val(struct node n1,int val);
struct node
{
 int val;
 struct node *next;
};

int main()
{
  struct node *top;
  int a=10;
  insert_val(*top,a);
  
  return 0;
}
void insert_val(struct node *top,int value)
{
	struct node *n;
	n=(struct node*)malloc(sizeof(struct node));
	if(!n)
	{
		printf("\nnot enough memeory");
	}
	else
	{
		top->val=value;
		top->next=n;
	}
}
