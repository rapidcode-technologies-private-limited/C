#include<iostream>
using namespace std;
int main()
{
	int s=20;
	int p=30;
	int &a=s;
	cout<<"a ="<<a<<endl;
	a=p;
	cout<<"a="<<a<<endl;
	cout<<&a<<endl<<&s<<endl<<&p<<endl;
	return 0;
}
