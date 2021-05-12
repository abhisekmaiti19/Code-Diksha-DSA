#include<bits/stdc++.h>
using namespace std;
void nxtgreat(int arr[], int n)
{
	 stack<int> s;
	 for(int i=0;i<n;i++)
	 {
	 	while(!s.empty() and s.top() < arr[i] )
	 	{
	 		int val = s.top();
	 		s.pop();
	 		cout<<val<<" -> "<<arr[i]<<endl;
	 	}
	 	//my work is done
	 	//then just add me to the stack
	 	s.push(arr[i]);
	 }
	 while(!s.empty())
	 {
	 	int val = s.top();
	 	s.pop();
	 	cout<< val << " - > "<< "-1"<<endl;
	 }
}
int main()
{
	int arr[10] = {5,4,3,2,10,6,8,6,66,2};
	nxtgreat(arr,10);
}