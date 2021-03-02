#include<bits/stdc++.h>
using namespace std;

class car {
private:
	int speed;

public:
	string name;
	int price;

	void getspeed (int myspeed)
	{
		this->speed  = myspeed;
		cout<<speed;
	}
};

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	car c;
	c.getspeed (60);
}