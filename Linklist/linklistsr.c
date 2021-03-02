#include<stdio.h>
#include<stdlib.h>

//self-referencing structure
struct node
{
	int data;
	struct node* link; //struct pointer -> base address

};
		// ---------------------sir code -----------------------

struct node* head = NULL;

int main()
{

	struct node *next1, *next2, *next3, *next4, *ptr, *pre;

	next1 = malloc(sizeof(struct node));
	next2 = malloc(sizeof(struct node));
	next3 = malloc(sizeof(struct node));
	next4 = malloc(sizeof(struct node));

	printf("enter num1: \n");
	int num;
	 scanf("%d",&num);

	 next1->data = num;

	 if(head == NULL)
	 {
	 	next1->link = NULL;
	 	head = next1;
	 }

	 //insert at end

	 printf("enter the value num2\n:");
	 scanf(" %d",&num);

	 next2->data = num;
	 if(next1->link == NULL)
     {
         next1->link = next2;
         next2->link = NULL;
     }

	 // insert at the start;
    printf("\n enter the value for next3");
	 scanf("%d",&num);

	 next3->data = num;

	 next3->link = head;
	 head = next3;

	  ptr = head;
	 while(ptr != NULL)
     {
         printf("%d--> ",ptr->data);
         ptr=ptr->link;
     }

	 // insert at before a value;

	  printf("\n enter the value for next3");
	 scanf("%d",&num);

	 int v;
	 printf("enter a value before insert");
	 scanf("%d",&v);

	 next4->data = num;

	 ptr = head;

	 while(ptr->data != v)
        {
        pre = ptr;
        ptr = ptr->link;

        }
        pre->link = next4;
     next4->link = ptr;

	 // display

	 ptr = head;

	 while(ptr != NULL)
     {
         printf("%d--> ",ptr->data);
         ptr=ptr->link;
     }

	return 0;

}