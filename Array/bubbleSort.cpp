#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	// cout<<"hello";
	int counter = 0;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	while(counter<n)
	{
		for(int i=0;i<n-counter;i++)
		{
			if(arr[i]>arr[i+1])
			{
				swap(arr[i],arr[i+1]);
			}
		}
		counter++;
	}

for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}



}