#include<bits/stdc++.h>
using namespace std;

class ListNode
{

public:
	int val;
	ListNode* next;

	ListNode(int val)
	{
		this->val = val;
		this->next = NULL;
	}
};

// in data structure our work is "insert search and delete"

// insert(head,5) ----> void insert(ListNode* head, </ here new head is created like temporary variable created in different memory address>)
// 			|
// 			|
// 			|
// 			|
// 			|
// 		   \  /
//          \/


// void insertathead(ListNode* head, int data)

// ----------------- EXAMPLE OF BY REFARENCE  AND BY VALUE -------------------------


// -----------------------------------------   BY VALUE  EXAMPLE ----------------------------------------------------

// void check (int* aptr)// aptr is temporary or different variable that fetch the value of pass value that is => 0x7ffee9748978
// {
// 	aptr = aptr +1; // aptr => 0x7ffee9748978 +1 => 0x7ffee9748982

//    // </> But the end of the scope block all changes is destroyed , it is not reflected in main
// }
// int main()
// {
// 	int x = 10;

// 	int* aptr = &x; // </>this aptr store address of 'x'
// 	cout<< aptr <<endl; // </> this print 'x' address = > 0x7ffee9748978
// 	check(aptr); // </> this pass the value of aptr that is  => 0x7ffee9748978
// 	cout<< aptr << endl; // here print the same value that is =>0x7ffee9748978
// }

// ------------------------------------------- BY ADDRESS EXAMPLE -----------------------------------------------

// void check (int* &aptr)// this &aptr is exact same varible which is define in main
// {
// 	aptr = aptr +1; // aptr => 0x7ffee9748978 +1 => 0x7ffee9748982
//    // </> Here the end of the scope block all changes isn't destroyed , it is reflected in main
// }

// int main()
// {
// 	int x = 10;

// 	int* aptr = &x; // </>this aptr store address of 'x'
// 	cout<< aptr <<endl; // </> this print 'x' address = > 0x7ffee9748978
// 	check(aptr); // </> i pass the value of aptr that is  => 0x7ffee9748978
// 	cout<< aptr << endl; // this is print the changes vlue that is => 0x7ffee9748982
// }


// we need to run this code or better say we should pass the head value by refference
void insertathead(ListNode* &head, int data)
{
	// new node should be dynamic
	// n = object_name
	// Listnode is class

	ListNode* n = new ListNode(data);
	n->next = head;
	head = n;
}

// insert at tail 

void insertattail(ListNode* &head, int data)
{
	// what if my head is null;

	if(head==NULL)
	{
		//no node inside the linked list
		// no difference between insert at head and tail

		insertathead(head, data);
		return;

	}
	ListNode* n = new ListNode(data);

	ListNode* temp = head;

	while(temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = n;
	n->next = NULL;
}
// finding the size of the link list

int size(ListNode* head)
{
		int count=0;
		while(head != NULL)
		{
			head = head->next;
			count++;
		}
	return count;
}

//insert at any point

void insertatanypoint(ListNode* &head, int data, int position)
{
	if(position<=1 or head == NULL)
	{
		insertathead(head,data);
		return;
	}
	if(position >= size(head) )
	{
		insertattail(head, data);
		return;
	}

	ListNode* temp = head;
	ListNode* add;

	ListNode* n = new ListNode(data);

	int jump = 1;

	while(jump < position-1)
	{
		temp = temp->next;
		jump++;
	}

	n->next = temp->next;
	temp->next = n;

}

/// Delete at head

void deleteathead(ListNode* &head)
{
	ListNode* toBedeleted = head;
	head = head->next;
	delete toBedeleted;
}


//Delete at tail

void deleteatTail (ListNode* head)
{
	ListNode* temp = head ;

	while(temp->next->next != NULL)
	{
		temp = temp->next;
	}

	ListNode* toBedeleted = temp->next->next;

	temp->next = NULL;
	delete toBedeleted;

}

bool search(ListNode* head, int key)
{
	ListNode* temp =head;
	while(temp!=NULL)
	{
		if(temp->val == key)
		{
			return true;
		}
		temp = temp->next;
	}

	return false;
}

void deleteatanyindex(ListNode* &head, int pos)
{
	if(pos == 1 or size(head)<=1)
	{
		deleteathead(head);
		return;
	}
	if(pos>=size(head))
	{
		deleteatTail(head);
	}

	ListNode* temp = head;

	int jump = 1;

	while(jump<pos-1)
	{
		temp = temp->next;
		jump++;
	}

	ListNode* toBedeleted = temp->next;
	temp->next = temp->next->next;
	delete toBedeleted;

}

ListNode* midpoint(ListNode* head)
{
	ListNode* slow = head;
	ListNode* fast = head;
	while(fast->next != NULL and fast->next->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
} 

ListNode* recursiveReverse(ListNode* head)
{
	if(head == NULL or head->next == NULL )
	{
		return head;
	}

	ListNode* newhead = recursiveReverse(head->next);
	ListNode* curr = head;
	curr->next->next = curr;
	curr->next = NULL;
	return newhead;
}

void display(ListNode* head)
{
	// the head inside this function is copy of the head
	// inside the main function
	
	ListNode* temp = head;
	while(temp!=NULL)
	{
		cout<< temp->val <<" -> ";
		temp = temp->next;	
	}

	cout << "NULL"<<endl;

}



int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ListNode* head = NULL;

	insertattail(head,6);

	insertathead(head,2);
	insertathead(head,3);
	insertathead(head,4);
	insertathead(head,5);

	// insert at tail
	insertattail(head,1);

	insertatanypoint(head,100,3);

	display(head);

	cout<<"before delete at head"<<endl;

	// delete

	deleteathead(head);

	display(head);

	cout<<"delete at tail"<<endl;
	deleteatTail(head);
	display(head);
	cout<<"Your Linklist size is = > "<< size(head) << endl;
	deleteatanyindex(head,2);
	display(head);
	deleteatanyindex(head,1);
	display(head);
	ListNode* mid = midpoint(head);
	cout<<"my mid point is  "<<mid->val<<endl;

	insertattail(head,7);
	insertattail(head,8);
	display(head);

	mid = midpoint(head);
	cout<<"my mid point is  "<<mid->val<<endl;
	
	head = recursiveReverse(head);

	display(head);

		
	


	return 0;
}