#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 int un=1;
struct node
{
	char a[1000];
	struct node *fw,*bw;
}*p,*q,*temp ,*pr;


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
		p->bw=NULL;
	}
	else
	{
		temp->bw=q;
		q->fw=temp;
		
	}
	q=temp;
	q->fw=NULL;
}

void delete_()
{
	char a[1000];
	scanf("%s",a);

	if(!strcmp(p->a,a))
	{
		free(p);
		p=p->fw;
		p->bw=NULL;
	}
	else
	{
	temp=p->fw;
	while(temp)
	{
		if(!(strcmp(temp->a,a)))
		{
		
			if(!temp->fw)
			{
			
				q=temp->bw; 
				temp->bw->fw=NULL;
				free(temp);
				
			}
			else
			{
			 pr=temp->bw->fw;
			 temp->bw->fw=temp->fw ;
			 temp->fw->bw=pr;
			 free(temp);
			}
		}
		temp=temp->fw;
	
	}
	}

}
void print()
{
	
	temp=p;
	while(temp)
	{
		printf("%s\n",temp->a);
		temp=temp->fw;
	}
}
int main()
{
  int i=0,yes=1;

 
  while(1)
  {
  	printf("enter  input 1 for add,2 for delete 3 for print :");
  	scanf("%d",&yes);
  	
  	if     (yes==2) delete_();
  	else if(yes==1) add();
  	else if(yes==3) print();

  	else break;
  	
  }
}
