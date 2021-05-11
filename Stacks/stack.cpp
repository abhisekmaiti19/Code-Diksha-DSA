//intorduction to stck
//what is stack =>
//stack is in LIFO order Last in first out

// 2   ==> if you add here an element then if you wish to remove elemenet then you have to delete last one added
// ---
// 3
// ---
// 4
// ---
// 5
// ---
// 6
// ---

// implimentation of array is with Array linklist and vector array
//function
// push( ) => insertion of new data
//top( ) => viewing the top most element
//pop ( ) => remove topmost element
//isempty( )
//isfull( )


//implementation of stack using vector

#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Stack{
	int top;
	int maxsize;
	// int *arr;
	T* arr;

public:
	Stack(int maxsize)
	{
		//initialize our array in constructur when new obj is created
		this->maxsize = maxsize;
		this->arr = new T[this->maxsize];
		this->top = -1;
	}
	void push(T data)
	{
		if(this->top == maxsize-1)
		{
			cout<<"stack overflow"<<endl;
			return;
		}
		this->top++;
		this->arr[this->top] = data;
	}

	void pop( )
	{
		if(this->empty())
		{
			cout<<"Stack Underflow"<<endl;
		}
		this->top--;
	}

	T gettop()
	{
		return this->arr[this->top];
	}
	int size()
	{
		return this->top +1;
	}
	bool empty()
	{
		// if(this->top == -1)
		// {
		// 	return true;
		// }
		// return false;

		return this->top == -1;
	}
};

int main()
{
	Stack<int> s(5);

	s.push(8);
	s.push(9);
	s.push(8);
	s.push(0);
	s.push(6);

	s.push(9);


	cout<<s.gettop()<<endl;

	while(!s.empty())
	{
		cout<<"Current top is: "<<s.gettop()<<endl;
		s.pop();
	}

	if(s.empty())
	{
		cout<<"Stack is empty"<<endl;
	}	


	
	return 0;
}
