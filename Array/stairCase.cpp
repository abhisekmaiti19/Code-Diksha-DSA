#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	int b;
	cin>>b;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{

			cin>>arr[i][j];


		}
	}

	int startIndex=0;
	int startColl = m-1;
	int abc[2],flag=0;;
	while(startIndex<n and startColl>=0)
	{
		if(arr[startIndex][startColl]==b)
		{
			flag++;
		abc[1]=startIndex;
		abc[2]=startColl;
		break;
	}
		if(arr[startIndex][startColl] >b)
		{
			startColl--;
		}
		else{
			startIndex++;
		}


	}
		if(flag)
		{
	
		cout<<"found at index "<<"["<<abc[1]<<"] "<<"["<<abc[2]<<"]";
	}
	else
	{
		cout<<"not found";
	}

	
}