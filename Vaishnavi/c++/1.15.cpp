#include<iostream>
using namespace std;
int &bigger(int&,int&);
int main()
{
	int x,y;
	x=1;
	y=2;
	bigger(x,y)=20;
	cout<<x<<endl<<y<<endl;
	return 0;
}
int &bigger(int &a,int &b)
{
	if(a>b)
		return a;
	else
		return b;
}

