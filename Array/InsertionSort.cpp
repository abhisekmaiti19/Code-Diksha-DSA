#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int divider =1;
	while(divider<n)
	{

		for(int i=divider;i>0;i--)
		{
			if(arr[i]<arr[i-1])f
			{
				swap(arr[i],arr[i-1]);
			}
		}
		cout<<"********************"<<divider<<"triversal************"<<endl;
		for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"	";
	}
		divider++;


	}
cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"	";
	}

}