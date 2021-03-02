#include<bits/stdc++.h>
using namespace std;

double betterpow(int n,int p)
{
	if(p==0)
	{
		return 1;
	}

	double sub = betterpow(n,p/2);
	if(p&1)
	{
		double ans = sub*sub*n;
		return ans;
	}

	else
	{
		double ans = sub*sub;
		return ans;
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cout<<betterpow(2,10);
}