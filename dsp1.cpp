#include<stdio.h>
void ar_sort(int [],int);
void display(int[],int);
int main()
{
	int a[100],n,m,val,opt,i,pos,no,j,temp,low,high,mid,value;
	printf("enter the size of the array ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter element ");
		scanf("%d",&a[i]);
	}
	do
	{
		printf("\n++++++++++SELECT OPERATION ON ARRAY++++++++");
		printf("\n1.add");
		printf("\n2.delete");
		printf("\n3.modify");
		printf("\n4.sort");
		printf("\n5.simplesearch");
		printf("\n6.binary search");
	    printf("\n7.display");
	    printf("\n8.exit");
		printf("\nenter your choise ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				   printf("\nenter no.of element you want to add ");
				   scanf("%d",&m);
				   for(i=n;i<n+m;i++)
				   {
				   	printf("enter element ");
				   	scanf("%d",&a[i]);
				   }
				   n=n+m;
				   break;
		   case 2:
		   	       printf("enter the position of element where you want to delete ");
		   	       scanf("%d",&pos);
		   	       if(pos>n)
		   	         printf("enter valid position ");
		   	       else
		   	       {
		   	        	printf("\n%d delete",a[pos-1]);
		   	       	   for(i=pos-1;i<n-1;i++)
		   	           {
		   	       	      a[i]=a[i+1];
		   	           }
		   	            n=n-1;
		   	        }
		   	        break;
		   	case 3:
		   		   printf("\nenter the position where you want to modify ");
		   		   scanf("%d",&pos);
		   	       if(pos>n)
		   	         printf("enter valid position ");
		   	       else
		   	       {
		   	         printf("\nenter new number ");
		   	         scanf("%d",&no);
		   	         a[pos-1]=no;
		   	         
		   	        }
		   	        break;
		   	case 4:
		   		   printf("\nbefore sorted array  ");
		   		   display(a,n);
		   		   printf("\nafter sorted array  ");
		   		   ar_sort(a,n);
		   		   display(a,n);
		   		   break;
		    case 5:
		    	   printf("\nenter the postion ");
		   		   scanf("%d",&pos);
		   	       if(pos>n && pos<0)
		   	         printf("enter valid position ");
		   	       else
		   	       {
		   	         printf("%d element found postion at %d ",a[pos],pos);
		   	         
		   	        }
		   	        break; 
		   case 6:
		   	       ar_sort(a,n);
		   	       display(a,n);
		   	       printf("\nenter value you want to search ");
		   	       scanf("%d",&value);
		   	       int sval;
		   	       low=0;
		   	       mid=0;
		   	       high=n-1;
		   	       while(low<=high)
		   	         {
		   	         	mid=high+low/2;
		   	         	if(a[mid]==value)
		   	         	{
		   	         		sval=value;
		   	         		break;
		   	         	}
		   	         	else if(value<a[mid])
		   	         	{
		   	         		high=mid-1;
		   	         	}
		   	         	else
		   	         	{
		   	         		low=mid+1;
		   	         	}
		   	         }
		   	         if(sval==value)
		   	            printf("%d element found at %d ",value,mid);
		   	         else
		   	           printf("element not found");
		   	        break;
		   	case 7:
		   		    display(a,n);
		   		  break;
		   	case 8:
		   		  opt=8;
		   		  printf("exit");
		   	      
		}
		
	}while(opt!=8);
  return 0;	
}
void ar_sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	  {
		for(j=i+1;j<n;j++)
		   	{
		   	 if(a[i]>a[j])
		   		{
		   		 temp=a[i];
		   		 a[i]=a[j];
		   		 a[j]=temp;
		   		}
		   	}
	 }
		   		   
}
void display(int a[],int n)
{
	int i;
	  for(i=0;i<n;i++)
      {
	    printf("%d ",a[i]);
	  }
}
