#include<iostream>
using namespace std;
int main()
{
	char *ptr="hello vaishnavi";
	char *&rptr=ptr;
	cout<<ptr<<endl;
	cout<<rptr<<endl;
	cout<<ptr+6<<endl;
	cout<<rptr+6<<endl;
	return 0;
}
