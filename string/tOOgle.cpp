#include<bits/stdc++.h>
using namespace std;
void frequen (string str)
{
	int count[1000]={0};

	for(int i=0;i<str.length();i++)
	{
		int df=str[i];
		count[df]+=1;
	}
	int big=count[0];
	for(int i=0;i<1000;i++)
	{
		if(count[i]>big)
		{
			big=count[i];
		}
	}

	cout<<big;
	

}
void toogle (string str)
{
	for(int i=0;i<str.length();i++)
	{
		if(str[i]>='A' and str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
		else if(str[i]>='a' and str[i]<='z')
		{
			str[i]=str[i]-32;
		}
	}
	for(int i=0;i<str.length();i++)
	{
		cout<<str[i];
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
	// toogle(str);
	frequen (str);

}