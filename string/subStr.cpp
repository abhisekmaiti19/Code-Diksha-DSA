#include<bits/stdc++.h>
using namespace std;
void getsubstr(string str)
{

	for(int i=0;i<str.length();i++)
		{
			int start =1;
			for(int j=i;-j<str.length();j++)
			{
				cout<<str.substr(i,start)<<endl;
				start++;
				// cout<<get<<endl;
			}	
		}
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string str;
	cin>>str;
	getsubstr(str);

}