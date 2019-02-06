#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 int un=1;
struct node
{
	char a[1000];
	struct node *link;
}*p,*q,*temp ;
void rev()
{
	struct node *ne=NULL,*pr=NULL;

	temp=p;	
	while(temp)
	{
		ne=temp->link;
		temp->link=pr;
		pr=temp;
		temp=ne;
	}
	p=pr;
	printf("successfully reversed .\n");
}

void add()
{
	char a[1000];
	scanf("%s",a);

	temp=(struct node *)malloc(sizeof(struct node));
	strcpy(temp->a,a);
	if(un==1)
	{
		p=temp;
		un=0;
	}
	else
	{
		q->link=temp;
	}
	q=temp;
	q->link=NULL;
}

void delete_()
{
	char a[1000];
	scanf("%s",a);

	if(!strcmp(p->a,a))
	{
		free(p);
		p=p->link;
	}
	else
	{
	struct node *prev=p;
	temp=p->link;
	while(temp)
	{
		if(!(strcmp(temp->a,a)))
		{
			printf("yes\n");
			if(!temp->link)
			{
			//	printf("here is error yes\n");
				prev->link=NULL;
				free(temp);
				
			}
			else
			{
			 prev->link=prev->link->link;
			 free(temp);
			}
		}
			prev=temp;
		temp=temp->link;
	
	}
	}

}
void print()
{
	
	temp=p;
	while(temp)
	{
		printf("%s\n",temp->a);
		temp=temp->link;
	}
}
int main()
{
  int yes=1;

 
  while(1)
  {
  	printf("enter  input 1 for add,2 for delete 3 for print 4 for reverse  :");
  	scanf("%d",&yes);
  	
  	
  	if(yes==1) add();
  	else if(yes==2) delete_();
  	else if(yes==3) print();
  	else if(yes==4)rev();
  	else break;
  	
  }
}
