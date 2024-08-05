#include<stdio.h>

 void main()
 {
 	int a;
 	a=1;
 	while(a<=10)
 	{
 		printf("%d",a);
 		if(a%2==1)
 		{
 			printf("\n");
 		}
 			else if(a%2==0)
 		{
 			printf(" ");
 		}
 		else
 		{
 			printf(" ");
 		}
 		a=a+1;
 	}
 }
