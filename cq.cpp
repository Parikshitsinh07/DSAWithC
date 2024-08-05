#include<stdio.h>
void insert_crqu(int[],int*,int*,int);
void display(int[],int*,int*);
int delete_crqu(int[],int*,int*);
void modify(int[],int*,int*,int);
int size;
int main()
{
	int opt,f=-1,r=-1,val,crque[size],del,pos;
	
	printf("enter the size of the circular ");
	scanf("%d",&size);


	do{
		printf("\n1.insert element into circularqueu");
		printf("\n2.delete element from the circularque");
		printf("\n3.display element into circularque");
		printf("\n4.exit");
		printf("\nenter your choise");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				printf("\nenter the element ");
				scanf("%d",&val);
			    insert_crqu(crque,&f,&r,val);
				break;
			case 2:
				del=delete_crqu(crque,&f,&r);
				if(del==-1)
				  printf("\ncircularque is empty");
				else
			    	printf("\n%d  element remove from the circularque",del);
				break;
		    	 
			case 3:
				printf("\nelement of the circularque\n");
				display(crque,&f,&r);
				break;
			case 4:
				    opt=4;
				    printf("\nexit");
				    break;
			default:
				   printf("\nwrong choise");
		}
	}
	while(opt!=4);
}
void insert_crqu(int crque[],int *f,int *r,int val)
{
	if((*r==4 && *f==0) || ( *f-*r==1))
	{
		printf("circular cueue is full");
	}
	else
	{
			if(*f==-1 && *r==-1)
			{
				*f=*r=0;
				crque[*r]=val;
			}
			else if(*r==size-1 && *f>0)
			{
				*r=0;
				crque[*r]=val;
			}
			else
			{
				*r=*r+1;
				crque[*r]=val;
			}
			printf("\nelement insert into circularque");
	}
}
void display(int crque[],int*f,int*r)
{
  if(*f==-1 && *r==-1)
  {
  	printf("\ncircularqueue is empty");
  }
  else
  {
  
	if(*r>=*f)
	{
		for(int i=*f;i<=*r;i++)
		{
			printf("%d ",crque[i]);
		}
	}
	else
	{
		for(int i=*f;i<size;i++)
		{
		   printf("%d ",crque[i]);	
		}
		for(int i=0;i<=*r;i++)
		{
			  printf("%d ",crque[i]);
		}
	}
}
}
int delete_crqu(int crque[],int *f,int *r)
{
	int remove;
	if(*f==-1)
	  return -1;
	else
	{
	 remove=crque[*f];
	  if(*f==*r)
	  {
	  	*f=-1;
	  	*r=-1;
	  }	
	  else if(*f==size-1)
	    *f=0;
	  else
	   *f=*f+1;
	}
	return remove;
}
void modify(int crque[],int *f,int *r,int pos)
{
	int val;
	if(*f==-1)
	   printf("\ncircularqueue is empty");
	else
	{
	  printf("enter new value ");
	  scanf("%d",&val);
	  crque[pos]=val;
	  printf("\nvalue update");
    }
	  
}
