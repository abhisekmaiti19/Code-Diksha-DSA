#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int minsum=arr[0];
	int currsum=arr[0];

	for(int i=1;i<n;i++)
	{
		int continuesum = currsum +arr[i];
		int continuesub = arr[i];
		currsum = min(continuesum,continuesub);
		minsum = min(currsum,minsum);
	}

	cout<<"maximum sum is"<<minsum;


}