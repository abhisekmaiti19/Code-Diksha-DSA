#include<bits/stdc++.h>
using namespace std;

 int pow(int n,int p)
 {
 		if(p==0)
 		{
 			return 1;
 		}

 		 double sub = pow(n,p-1);
 		double ans = n*sub;
 		return ans;
 }

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cout<<pow(12,30)<<endl;
}