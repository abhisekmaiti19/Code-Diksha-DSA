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
	int b;
	cin>>b;
	int count = 0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];

	}
	int left,right;
	left = 0;
	right =n-1;


	while(left<right)
	{

			if( arr[left]+arr[right] >b)
			{
				
				right--;
			}
			else if ( arr[left]+arr[right] <b)
			{
				left++;
			}
			else
			{
				count++;
				left++;
				right--;
			}


	}

	cout<<count;




}

