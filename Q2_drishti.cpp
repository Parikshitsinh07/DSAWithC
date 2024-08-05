#include<stdio.h>
void q_insert(int[],int*,int*,int);
void q_display(int[],int*,int*);
int q_delete(int [],int*,int*);
void q_modify(int[],int*,int*,int);
int main()
{
   int que[5],start=-1,end=-1,val,option,del,pos;
   do
   {
   	printf("\n1.insert");
   	printf("\n2.delete");
   	printf("\n3.display");
    printf("\n4.exit");
   	printf("\n enter your choise ");
   	scanf("%d",&option);
   	switch(option)
   	 {
   	   case 1:
		  printf("enter your value ");
		  scanf("%d",&val);
		  q_insert(que,&start,&end,val);
		  printf("\ninsert");
		  break;
		case 2:
			del=q_delete(que,&start,&end);
			printf("\ndeleted elemnt %d ",del);
			break;
		case 3:
			q_display(que,&start,&end);
			break;
		case 4:
			   option=4;
			printf("\nexit");
		default:
			printf("\nwrong choise");
   	 }
   }while(option!=4);
   return 0;	
}
void q_insert(int que[],int *start,int *end,int val)
{
	if(*end==4)
	{
		printf("queue is full");
	}
	else
	{
		if(*start==-1 && *end==-1)
		{
			*start=*end=0;
			que[(*end)]=val;
		}
		else
		{
			//*end=*end+1;
			que[++(*end)]=val;
		}
	}
}
void q_display(int que[],int *start,int *end)
{
	printf("s = %d e = %d",*start,*end);
	if(*start==-1 && *end==-1)
	{
		printf("\nqueue is empty");
	}
	else
	{
		for(int i=*start;i<=*end;i++)
		{
			printf(" %d ",que[i]);
		}
	}
}
int q_delete(int que[],int *start,int *end)
{  
	printf("s = %d e = %d",*start,*end);
	if(*start==-1 && *end==-1)
	{
		printf("\nqueue is empty");
	}
	else
	{
	  if(*start==*end)
	  {
	  	int temp=que[*end];
	  	*start=*end=-1;
	  	 
	  	return temp;
	  //	 return que[*start];
	    
	  }
	  else
	  {
	  	return que[(*start)++];
	  	
	 
	  	
	  }
	}
	
}
void q_modify(int que[],int *start,int *end,int pos)
{
	int val;
	if(*start ==-1 && *end==-1)
	{
		printf("queue is empty");
	}
	else
	{
     	printf("enter element ");
     	scanf("%d",&val);
	    que[pos]=val;
    }
}
	
	

