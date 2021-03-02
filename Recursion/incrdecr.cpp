#include<bits/stdc++.h>
using namespace std;
void decr(int n)
{
	if(n==1)
	{
		cout<<n;
		return;
	}
	cout<<n<<", ";
	decr(n-1);
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

		decr(5);
}