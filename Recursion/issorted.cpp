#include<bits/stdc++.h>
using namespace std;
bool linear (int startind,int arr[5],int size)
{
	if(startind>size)
	{
		return 1;
	}


	if(arr[startind]<arr[startind+1])
	{

		bool index=linear(startind+1,arr,size);
		
		return index;
	}
	else
	{
		return 0;
	}

}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int arr[5]={2,3,2,8,1};
	int si =0;
	int key =5;


	int value = linear(si,arr,5);
	if(value==1) cout<<"array is sorted";
	else cout<<"oops";
}