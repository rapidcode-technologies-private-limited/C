#include<iostream>
using namespace std;
int main()
{
	void pswap(int *,int *);
	void rswap(int&,int&);
	int x=20,y=30;
	int p=60,q=70;
	pswap(&x,&y);
	cout<<"x="<<x<<"y="<<y<<endl;
	rswap(p,q);
	cout<<"p="<<p<<"q="<<q<<endl;
	return 0;
}
void pswap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
void rswap(int &i,int &j)
{
	int t;
	t=i;
	i=j;
	j=t;
}
	
