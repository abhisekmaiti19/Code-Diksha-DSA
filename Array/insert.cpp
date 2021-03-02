#include<bits/stdc++.h>
using namespace std;
int main() 
{ 


	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	int n;
	scanf("%d",&n);
	int a[n]; 
	int i, value, position; 
	for (i = 0; i < n; i++) 
		{
			scanf("%d",&a[i]);
		}
	for (i = 0; i < n; i++) 
	{
		printf("%d ", a[i]); 
	}
	printf("\n enter value"); 

	scanf("%d",&value);
	printf("\n enter position");  
	scanf("%d",&position);
	n++; 
	for (i = n; i >= position; i--)
	{ 
		a[i] = a[i - 1]; 
	a[position - 1] = value; 
	} 
	for (i = 0; i < n; i++) 
	{
		printf("%d ", a[i]); 
	}
	printf("\n"); 

	return 0; 
} 


