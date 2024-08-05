#include<stdio.h>
void push(int[],int*,int);
void display(int[],int);
int pop(int [],int *);
int peep(int [],int*,int);
int main()
{
   int stack[5],val,top=-1,option,remove,search,pos;
   do
   {
   	  printf("\n+++++++++++++OPERATION ON STACK++++++++++++");
	  printf("\n1.Push");
	  printf("\n2.Pop");
	  printf("\n3.peep");
	  printf("\n4.display");
	  printf("\n5.exit");
	  printf("\nEnter a choice: ");
	  scanf("%d",&option);
	  switch(option)
	  {
	  case 1:printf("\nenter your element: ");
			 scanf("%d",&val);
			 push(stack,&top,val);
			 break;
	  case 2:
	  	     remove=pop(stack,&top);
	  	     if(remove==-1)
	  	       printf("\nstack is empty");
	  	     else
	  	       printf("\n%d element remove from the stack ",remove);
	  	     break;
	  case 3:
	  	     printf("\nenter the position ");
	  	     scanf("%d",&pos);
	  	     if(pos>top || pos<0)
	  	       printf("\nenter valid positon");
	  	     else
	  	     {
	  	       search=peep(stack,&top,pos);
	  	       if(search==-1)
	  	        printf("\nelement not found");
	  	      else
	  	         printf("%d element found at %d ",search,pos);
	  	     }
	  	     break;
	  case 4:
	         display(stack,top);
			 break;
	  case 5:
	  	     option=5;
	  	     printf("\nexit");
	  default:
	          break;
	  }
   }
   while(option!=5);
   return 0;
}
void push(int stack[],int *top,int val)
{
   if(*top>=4)
   {
	  printf("stack is full");
   }
   else
   {
	
	  stack[++*top]=val;
	  printf("%d\n",stack[*top]);
	  printf("element is insert\n");
   }
}
int pop(int stack[],int *top)
{
	int remove;
	if(*top==-1)
	  return -1;
	else
	{
	   remove=stack[*top];
	   *top=*top-1;
	  return remove;
   }
}
int peep(int stack[],int *top,int pos)
{

	if(*top==-1)
	  return -1;
	else
	  return stack[pos];
	
	
}
void display(int stack[],int top)
{
   int i;
   if(top==-1){
		printf("Empty stack");
		return;
   }

   for(i=top;i>=0;i--)
   {
	  
		 printf("%d\n",stack[i]);
   }
}
