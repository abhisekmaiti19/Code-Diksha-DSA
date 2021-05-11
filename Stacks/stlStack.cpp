#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> s;


	s.push(8);
	s.push(9);
	s.push(8);
	s.push(0);
	s.push(6);

	s.push(9);


	cout<<s.top()<<endl;

	cout<<"stac size is: "<<s.size()<<endl;

	while(!s.empty())
	{
		cout<<"Current top is: "<<s.top()<<endl;
		s.pop();
	}

	if(s.empty())
	{
		cout<<"Stack is empty"<<endl;
	}	

	return 0;
}