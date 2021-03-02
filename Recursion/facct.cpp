#include<bits/stdc++.h>
using namespace std;
int linear (int number)
{
	if(number == 0 or number == 1)
	{
		return 1;
	}
	
	int fact = linear(number-1);
	return number * fact;

}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cout<<linear(0)<<endl;
}