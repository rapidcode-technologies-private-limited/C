#include<iostream>
using namespace std;
int multiply(int a,int b,int c=5);
int main()
{
	int x,y;
	x=multiply(10,20,30);
	y=multiply(10,20);
	cout<<x<<endl<<y<<endl;
	return 0;
}
int multiply(int a,int b,int c)
{
	return(a*b*c);
}
	
