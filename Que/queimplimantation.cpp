// FIFO -=-=-=-> first in first out
#include<bits/stdc++.h>

using namespace std;
// class Queue
// {
// 	list<int> storage;

// public:
// 	void push(int data)
// 	{
// 		this->storage.push_back(data);
// 	}
// 	void pop()
// 	{
// 		this->storage.pop_front();
// 	}
// 	int getFront()
// 	{
// 		return this->storage.front();
// 	}
// 	int size()
// 	{
// 		return this->storage.size();
// 	}
// 	int empty()
// 	{
// 		return this->storage.empty();
// 	}

// };

int main()
{
	queue<int> q;
	// Queue q;
	q.push(2);
	q.push(20);
	q.push(32);
	q.push(79);
	q.push(58);
	q.push(25);

	cout<<"Front is having the value   "<< q.front() <<endl;

	q.pop();
	q.pop();

	cout<<"Front is having value   "<<q.front()<<endl;
	 cout<<"******************LOOP***************"<<endl;

	 while(!q.empty())
	 {
	 	cout<<q.front()<<endl;
	 	q.pop();
	 }

	return 0;
}