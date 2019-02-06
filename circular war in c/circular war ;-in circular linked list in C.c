#include<stdio.h>
#include<stdlib.h>
struct node
{
	int n;
	struct node *link;
}*p,*q ,*temp;
int add(int number)
{
	if(number <1)return 0;	
	p=(struct node *)malloc(sizeof(struct node));
	p->n=1;
	p->link=NULL;
	
	q=p;
	int i=2;
	while(i<=number)
		{
			q->link=(struct node *)malloc(sizeof(struct node));
			q=q->link;
			q->n=i;
			
			q->link=NULL;
			
			i++;
			
		}
		q->link=p;
		q=p;
		i=0;
		while(q->link!=q)
			{
					
		
			temp=q->link;
			q->link=q->link->link;
			free(temp);
			q=q->link;
			}
	return q->n;
}


int main()
{
  	int numb;
  	printf("enter the count of members in the circle :");
	scanf("%d",&numb);
	int ret=add(numb);
	printf("%d is the remaining one.\n",ret);
  	return 0;

}
