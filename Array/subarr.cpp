#include<iostream>
#include<vector>
#include<climits>
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
	// int start=0;
	// int end= sizeof(arr)/sizeof(int);

	for(int start=0;start<n;start++)
	{

		for(int end=start;end<n;end++)
		{
			int max = INT_MAX;
			int car;
				for(int j=start;j<=end;j++)
				{
					// car+=arr[j];
					cout<<arr[j]<<",";
				}
				if(max<car)
				{
					max=car;
				}
				cout<<endl;
				// cout<<max<<endl;
		}

	}
	// cout<<"final"<<max;



}