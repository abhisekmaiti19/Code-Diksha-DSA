#include<bits/stdc++.h>
using namespace std;

int main()
{
	list<int> li;
	//insert at tail
	li.push_back(10);

	//insert at head
	li.push_front(67);

	li.push_back(885);
	li.push_back(96);
	li.push_back(7);
	li.push_back(10);
	li.push_back(20);

	cout<<li.front()<<endl; //get front value
	cout<<li.back()<<endl; //get back value

	//for each loop

	// what is for each loop ?

	// let supose you have any list or any data structure 
	// for(**datatype val : data structure)
	// {
	// 	cout<< val;
	// }

	// ** here data type is actual of the type of data structure in this example we use int -> for data structure -> list;

	for(int val : li )
	{
		cout<<val<<" -> ";
	} 

	cout<< endl;

	// delete at head
	li.pop_front();

	// delete at tail

	li.pop_back();

	cout<<"after deletion "<<endl;

	for(int val : li )
	{
		cout<<val<<" -> ";
	} 

	cout<<endl;
	// for sorting ---> time complexity O(nlogn)
	li.sort();

	for(int val : li )
	{
		cout<<val<<" -> ";
	} 

	return 0;
}