#include<iostream>
using namespace std;
int main()
{
	int s=20;
	int &a=s;
	cout<<s<<" "<<a<<endl;
	a++;
	cout<<s<<" "<<a<<endl;
	return 0;
}

