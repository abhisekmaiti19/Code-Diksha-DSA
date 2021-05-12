//refer the link -> https://www.geeksforgeeks.org/find-expression-duplicate-parenthesis-not/
//Question Is

//==========================

//Given a balanced expression, 
//find if it contains duplicate parenthesis or not. 
//A set of parenthesis are duplicate if the same subexpression is surrounded by multiple parenthesis.

//=======

// #given string is balanced or not 
#include<bits/stdc++.h>
using namespace std;

bool isbalanced(string str)
{
	
	stack<char> s;

	for(int i=0;i<str.length();i++)
	{
		char ch = str[i];
		if(ch != ')')
		{
			s.push(ch);
		}
		else
		{
			if(s.top()=='(')
			{
				return true;
			}
			while(s.top() != '(')
			{
				s.pop();
			}
			s.pop();
		}
	}


	return false;

}
int main()
{
	cout<<isbalanced("((a+b)-((a-b)))")<<endl;
}