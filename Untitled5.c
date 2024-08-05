#include<stdio.h>

 void main()
{
	 float a,sum,avg;
	 sum=0.00;
	 printf("\n enter no");
	 scanf("%f",&a);
	 while(a!=-999.99)
	 {
	 		printf("%d",a);
	 	sum=sum+a;
	 	printf("\n enter a");
	 	scanf("%f",&a);
	 	avg=sum/a;
    	 printf("\n sum is %f",sum);
    	 printf("avg is %f",avg);
    }
} 
