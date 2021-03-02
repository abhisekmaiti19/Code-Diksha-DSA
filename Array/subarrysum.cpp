#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	// cout<<"ho/";
	int n;
	cin>>n;
	int arr[n];
	int sum;
	int maxum= INT_MIN;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		int sum=0;
		
		for(int j=i;j<n;j++)
		{
			sum+=arr[j];
			if(maxum<sum)
			{
				maxum=sum;
			}

			// update=max;
		}

		
	}
	cout<<"maximum sum is "<<maxum;
}