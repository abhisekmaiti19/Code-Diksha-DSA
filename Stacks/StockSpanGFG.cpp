//reffer this link = https://www.geeksforgeeks.org/the-stock-span-problem/
#include<bits/stdc++.h>
using namespace std;

void stockSpan(int arr[],int n)
{
	stack<int> s;
	 
	for(int i=0;i<n;i++)
	{
		while(!s.empty() and arr[s.top()]<arr[i])
		{
			s.pop();
		}
		int days;
		if(!s.empty())
		{
			 days = i - s.top();
		}
		else
		{
			days++;
		}
		
		cout<<arr[i]<<" -> "<<days<<endl;
		s.push(i);
	}


}
int main ()
{
	int arr [5]= {100,44,80,90,30};
	stockSpan(arr,5);
}