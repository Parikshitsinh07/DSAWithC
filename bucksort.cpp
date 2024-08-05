#include<stdio.h>
#include<stdlib.h>
void bucket(int [],int);
int getMax(int [],int);
int main()
{
	int *x,n,i;
	printf("\nEnter 1-D Array size ");
	scanf("%d",&n);
	x=(int*)malloc(n*sizeof(int));
	printf("\nEnter 1-D Array element \n");
	for(i=0;i<n;i++)
	{
		printf("X[%d] :",i);
		scanf("%d",&x[i]);
	}
	printf("\nBefore sort 1-D Array element are : \n");
	for(i=0;i<n;i++)
	{
		printf("\nX[%d] :%d",i,x[i]);
	}
	bucket(x,n);
	printf("\nAfter sort 1-D Array element are : \n");
	for(i=0;i<n;i++)
	{
		printf("\nX[%d] :%d",i,x[i]);
	}
	free(x);
	return 0;
	
}
int getMax(int a[],int n)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		     max=a[i];
	}
	return max;
}
void bucket(int x[],int n)
{
	int i,j,*p;
	//int max=getMax(x,n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	      p[i]=0;
	for(i=0;i<n;i++)
	      p[x[i]]++;
	for(i=0,j=0;i<n;i++)
	{
		for(;p[i]>0;(p[i])--)
		    x[j++]=i;
	}
	free(p);
	
}
