#include<stdio.h>
int deque[5],front=-1,rear=-1;
void insert_rear(int);
void insert_front(int);
int del_rear();
int del_front();
void display(int[],int,int);
void modify(int [],int,int,int);
int main()
{
	
	int ch,val,del1,del2,pos;
	do
	{
	   printf("\n1.insert from rear");
	   printf("\n2.insert from front");
	   printf("\n3.delete  from rear");
	   printf("\n4.delete from front");
	   printf("\n5.display");
	   printf("\n6.modify");
	   printf("\nenter your choise ");	
	   scanf("%d",&ch);
	   switch(ch)
	   {
	   	  case 1:
	   	  	printf("\nenter your elemnt ");
	   	  	scanf("%d",&val);
	   	  	insert_rear(val);
	   	  	break;
	   	  case 2:
	   	  	printf("\nenter your elemnt ");
	   	  	scanf("%d",&val);
	   	    insert_front(val);
	   	    break;
		  case 3:
			  del1=del_rear();
			  if(del1==-1)
			    printf("\ndeque is empty");
			  else
			    printf("\n%d is deleted from rear",del1);
			  break;
		  case 4:
			 del2=del_front();
			  if(del2==-1)
			    printf("\ndeque is empty");
			  else
			    printf("\n%d is deleted from rear",del2);
			  break;
	   	 case 5:
	   	 	  display(deque,front,rear);
	   	 	  break;
	   	case 6:
	   		printf("\nenter postion");
	   		scanf("%d",&pos);
	   		if(pos<front || pos>rear)
	   		{
	   			printf("\n%d front ",front);
	   		    printf("\n%d pos ",pos);
	   		    printf("\n%d rear ",rear);
	   		    printf("\nelement already deleted");
	   		}
	   		else
	   		  modify(deque,front,rear,pos);
	   		break;
	   	case 7:
	   		ch=7;
	   		printf("\nExit");
	   		break;
	  default:
	  	      printf("wrong choise");
     }
	}
	while(ch!=8);
	return 0;
}
void insert_rear(int val)
{
	if((front==0 && rear==4) || (front==rear+1))
	{
		printf("queue is full");
	}
	else
	{
		if(rear==-1)
		{
			front=0;
			rear=0;
		}
		else if(rear==4)
		{
			rear=0;
		}
		else
		{
			rear=rear+1;
		}
		deque[rear]=val;
		printf("\ninsert at rear");
	}
}
void insert_front(int val)
{
	if((front==0 && rear==4) || (front==rear+1))
	{
		printf("queue is full");
	}
    else
    {
    	if(front==-1)
    	{
    		front=0;
    		rear=0;
    	}
    	else if(front==0)
    	{
    		front=4;
    	
    	}
    	else
    	{
    		front=front-1;
    		
    	}
    	deque[front]=val;
    	printf("\ninsert at front side");
    }
}
int del_rear()
{
	int item;
	if(front==-1)
	{
	   return -1;
	}
	else
	{
      item=deque[rear];
      if(rear==front)
	  {
       front=-1;
	   rear=-1;
	  }
    else if(rear==0)
	{
		rear=4;
	}
	else
	{
		rear=rear-1;
	}
	}
     return item;
	
}
int del_front()
{
	int itm;
	if(front==-1)
	 return -1;
	else
	{
		itm=deque[front];
		if(front==rear)
		{
			front=rear=-1;
		}
		else if(front==4)
		{
			front=0;
		}
		else
		{
			front=front+1;
		}
	}
	return itm;
}
void  display(int deque[],int front,int rear)
{
	int i=front;
	while(i!=rear)
	{
		printf(" %d ",deque[i]);
		i=(i+1)%5;
	}
	printf(" %d ",deque[rear]);
}
void modify(int deque[],int front,int rear,int pos)
{
	int val;
	if(front==-1)
	{
		printf("deque is empty");
	}
	else
	{
		printf("enter new element ");
		scanf("%d",&val);
		deque[pos]=val;
	}
}
