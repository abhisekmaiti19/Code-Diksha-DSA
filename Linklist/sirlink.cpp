#include<stdio.h>
#include<stdlib.h>
using namespace std;
//self-referencing structure
struct node
{
	int data;
	struct node *link; //struct pointer -> base address

	
};

struct node *head = NULL;


int main()
{

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	struct node *next1;

	next1 = malloc(sizeof(struct node))*;

	int num;
	 scanf("enter the value of num: %d",&num);

	 next1->data = num;

	 if(head == NULL)
	 {
	 	next1->link = NULL;
	 	head = next1;
	 }



	printf("next1 data is %d",next1->data);

	return 0;

}