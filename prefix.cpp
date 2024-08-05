#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define size 20
void reverse(char []);
char stack[size];
char prefix[size];
void push(char);
char pop();
int top=-1;
int priority(char x);
int main()
{
	char x;
	char exp[20];
	char *e;
	printf("\nenter value ");
	scanf("%s",&exp);
	//reverse(exp);
	e=strrev(exp);
	int k=0;
	while(*e!='\0')
	{
	    if(isalpha(*e))
		{
		   prefix[k]=*e;
		   k++;
		}
		else if(*e=='(')
		    push(*e);
		else if(*e ==')')
		 {
		 	while((x=pop())!='('){
		 	  prefix[k]=x;
			  k++;
			}
		 }
		else
		{
		     while(priority(stack[top])>=priority(*e))
		     {
		      	//printf("%c",pop());
				 prefix[k]=pop();
				 k++;
			 }
		     push(*e);
	    }
	   e++;
	}
	while(top!=-1)
	{
		  prefix[k]=pop();
		  k++;
	}
	printf("%s",strrev(prefix));
	//for(int i=0;i<strlen(prefix);i++)
	//{
	//	printf("%c",prefix[i]);
	//}
	
	return 0;
}
void reverse(char array[])
{
	int i,j=0;
	char temp[100];
	for(i=strlen(array)-1;i>=0;i--)
	{
		temp[j]=array[i];
		j++;
	}
	j++;
	temp[j]='\0';
	strcpy(array,temp);
	
}
void push(char x)
{
	if(top >= size -1){
		printf("full");
	}
	else{
	stack[++top]=x;
	}
}
char pop()
{
	if(top==-1)
		printf("stack is empty");
	else
		return stack[top--];
}
int priority(char x)
{
	if(x=='(')
		return 0;
    if(x=='+'||x=='-')
		return 1;
	if(x=='/'||x=='*')
		return 2;

}

