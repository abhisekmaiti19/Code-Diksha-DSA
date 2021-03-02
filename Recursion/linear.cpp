#include<bits/stdc++.h>
using namespace std;
int linear (int startind,int arr[5],int size,int key)
{
	if(startind>=size)
	{
		return -1;
	}
	if(arr[startind]==key)
	{
		return startind;
	}
	else
	{
		int index=linear(startind+1,arr,size,key);
		return index;
	}

}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int arr[5]={2,3,5,8,9};
	int si =0;
	int key =5;


	cout<<linear(si,arr,0,key)<<endl;
}