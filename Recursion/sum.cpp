#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
	if(n==1)
	{
		
		return 1;
	}
	cout<<" go n= "<<n<<endl;
	int number = sum(n-1);
	cout<<" number ="<<number<<" n= "<<n<<endl;
	int ans = number + n;
	cout<<"number-->ans = "<<ans<<endl;
	return ans;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

		cout<<sum(5);
}