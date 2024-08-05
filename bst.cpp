#include<stdio.h>
#include<stdlib.h>
struct treenode
{
	int data;
	struct treenode *left;
	struct treenode *right;
};
void insert (struct treenode**,int);
int search(struct treenode**,int);
int main()
{
	struct treenode *root=NULL;
	int opt,val,sval,val1;
	do
	{
		printf("\n1.insert");
		printf("\n2.delete");
		printf("\n3.display");
		printf("\n4.search");
		printf("\n5.exit");
		printf("\nenter your choise ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				   printf("\nenter value ");
				   scanf("%d",&val);
				   insert(&root,val);
				   break;
			case 4:
				  printf("\nenter search vale ");
				  scanf("%d",&val1);
			      sval=search(&root,val1);
			      if(sval==1)
			        printf("\nelement is found %d",sval);
			      else
			        printf("element is not found %d",sval);
			      break;
		}
	}while(opt!=5);
	return 0;
}
void insert(struct treenode **root,int val)
{
	struct treenode *newnode,*curr,*prev;
	newnode=(struct treenode*)malloc(sizeof(struct treenode));
	newnode->data=val;
	newnode->left=NULL;
	newnode->right=NULL;
	if(*root==NULL)
	  {
	  	*root=newnode;
	  	printf("\nelement insert");
	  }
	else
	{
		curr=*root;
		while(curr!=NULL)
		{
			prev=curr;
			if(curr->data>val)
			    curr=curr->left;
			else
			  curr=curr->right;
		}
		if (prev->data>val)
		 {
		     prev->left=newnode;
		     printf("\nifnode is insert ");
		 }
		 else
		 {
		 	prev->right=newnode;
		 	printf("\nelsenode is insert");
		 }
		     
		
	}
	
	
}
int search(struct treenode *root,int sval)
{
	int f=0;
	struct treenode *curr;
	curr=root;
	while(curr!=NULL && !f)
	{
		if(curr->data==sval)
		{
			f=1;
		}
		else
		{
			if(curr->data>sval)
			{
		      curr=curr->left;
		    }
		    else
		    {
		          curr=curr->right;
		    }
		}
	}
	return f;
}
