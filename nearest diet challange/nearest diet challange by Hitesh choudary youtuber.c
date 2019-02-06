#include <stdio.h>
#include <stdlib.h>
struct btnode

{

    int val;      //diet value

	char person[1000];//person name
    struct btnode *l;//left link

    struct btnode *r;//right link

}*root = NULL, *temp = NULL;

void insert()

{

    create();

    if (root == NULL) 

        root = temp;

    else    

        search(root);    

}

void create()

{

    printf("Enter diet and person name : ");

    
    temp = (struct btnode *)malloc(1*sizeof(struct btnode));

	scanf("%d %s", &temp->val,temp->person);
    
    temp->l = temp->r = NULL;

}
void search(struct btnode *t)

{

    if ((temp->val >= t->val) && (t->r != NULL))      /* value more than root node val insert at right */

        search(t->r);

    else if ((temp->val >= t->val) && (t->r == NULL))

        t->r = temp;

    else if ((temp->val < t->val) && (t->l != NULL))    /* value less than root node val insert at left */

        search(t->l);

    else if ((temp->val < t->val) && (t->l == NULL))

        t->l = temp;
    

}


void inorder(struct btnode *t)

{

    if (root == NULL)

    {

        printf("no one in the family list ");

        return;

    }

    if (t->l != NULL)    

        inorder(t->l);

    printf("%d -> ", t->val);

    if (t->r != NULL)    

        inorder(t->r);

}
int abslt(int a,int b)
{
	int c=a-b;
	if(c<0)c*=-1;
	return c;
}

struct btnode* nearest(struct btnode *root1, int val){
    if(root1->val == val)
        return root1;
    if(val < root1->val){
        if(!root1->l)
            return root1;
        struct btnode * p = nearest(root1->l, val);
        return abslt(p->val,val) > abslt(root1->val,val) ? root1 : p;
    }else{
        if(!root1->r)
            return root1;
         struct btnode  * p = nearest(root1->r, val);
        return abslt(p->val,val) > abslt(root1->val,val) ? root1 : p;
    }   
    return NULL;

}
void matchup()
{
	printf("enter biscuit no of the new person :-");
	int biscuit;
	scanf("%d",&biscuit);
	 struct btnode  * p= nearest(root,biscuit);
	 if(p->val==biscuit)
	 	{
	 		printf("%d is the exact diet of %s \n",p->val,p->person);
		 }
	 else printf("\n   %d is nearest diet of %s\n",p->val,p->person);
}


void main()

{

    int ch;

 

    printf("\nOPERATIONS ---");
    printf("\n1 - Insert a person diet \n");
    printf("\n 2 print all family diet");
    printf("\n3 - match up a person diet \n");
    printf("\n4 - Exit\n");

    while(1)

    {

        printf("\nEnter your choice : ");

        scanf("%d", &ch);

        switch (ch)

        {

        case 1:    

            insert();

            break;

        case 2:    

            inorder(root);

            break;
		case 3:
			
			matchup();
			break;
        case 4:    

            exit(0);

        default :     

            printf("Wrong choice, Please enter correct choice  ");

            break;    

        }

    }

}



