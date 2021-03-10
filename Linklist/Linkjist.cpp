#include<bits/stdc++.h>
using namespace std;
class Listnode {

	public:
		int val;
		Listnode* next;

		Listnode (int val)
		{
			this->val = val;
			this->next = NULL;
		}

};

void inserathead (Listnode* &head, int data)
{
	Listnode* n = new Listnode(data);
	n->next = head;
	head = n;
}

int size(Listnode* head)
{
	int size=0;
	while(head != NULL)
	{
		head = head -> next;
		size++;
	}
	return size;
}

void insertattail(Listnode* &head, int data)
{
	if(head==NULL)
	{
		inserathead(head, data);
		return;
	}

	Listnode* temp = head;
	while(temp->next != NULL)
	{
		temp = temp -> next;
	}

	Listnode* n = new Listnode(data);

	temp->next = n;
	n->next = NULL;
}

void insertAtAnyPosition(Listnode* &head, int data, int position)
{
	if( position <=1 or head==NULL)
	{
		inserathead(head,data);
		return;
	}

	if(position >= size(head))
	{
		insertattail(head,data);
		return;
	}

	Listnode* n = new Listnode(data);
	Listnode* temp = head;
	int jump = 1;

	while(jump < position-1)
	{
		temp = temp->next;
		jump++;
	}

	n->next = temp->next;
	temp->next = n;
}

void deleteathead(Listnode* &head)
{
	Listnode* tobedeleted = head;
	head = head->next;
	delete tobedeleted;

}
void deleteattail(Listnode* &head)
{
	Listnode* temp = head;
	while(temp->next->next != NULL)
	{
		temp= temp->next;
	}

	Listnode* tobedeleted = temp->next;
	temp->next = NULL;

	delete tobedeleted; 
}

//-------------------------------------------------------------------------------//


void display(Listnode* head)
{
	
	while (head != NULL)
	{
		cout<<head->val<<" -> ";
		head = head->next;
	}

	cout<< " xx NULL xx";
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	Listnode* head = NULL;
	inserathead(head,9);
	inserathead(head,8);
	inserathead(head,7);
	inserathead(head,6);
	inserathead(head,5);
	inserathead(head,4);
	inserathead(head,3);
	inserathead(head,2);
	inserathead(head,1);


	insertattail(head,10);
	insertAtAnyPosition(head, 3000, 3);
	insertAtAnyPosition(head, 5000, 5);
	deleteattail(head);

	deleteathead(head);



	display(head);

}