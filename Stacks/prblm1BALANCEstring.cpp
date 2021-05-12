// #given string is balanced or not 
#include<bits/stdc++.h>
using namespace std;

bool isbalanced(string str)
{
	//intution-> to find the most recent opening 
	// bracket in order to match it with the current
	//  closing bracket
	//(with Ds we can use which)
	//that helps us to find the most recenr value/bracket

	stack<char> s;

	for(int i=0;i<str.length();i++)
	{
		char ch = str[i];
		if(ch == '(')
		{
			s.push(ch);
		}
		else
		{
			if(s.empty())
			{
				return false;
			}
			s.pop();
		}
	}


	return s.empty();

}
int main()
{
	cout<<isbalanced("((())")<<endl;
}