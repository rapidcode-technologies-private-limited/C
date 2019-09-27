#include<iostream>
using namespace std;
int main()
{
	int x=30;
	int *p=&x;
	int &m=*p;
	cout<<x<<" "<<*p<<" "<<m<<endl;
	m=10;
	cout<< x <<" "<< *p << " "<< m << endl;
	cout<<&x<<" "<<&m<<" "<<&p<<endl;
	return 0;
}
