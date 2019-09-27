#include<iostream>
using namespace std;
int add(char);
int add(int,int);
int add(int,int,int);
float add(float,float);
int main()
{
	char a='S';
	int x=10,y=20;
	int i=100,j=200,k=300;
	float p=2.2,q=3.3;
	int d,e,f;
	float g;
	d=add(a);
	e=add(i,j,k);
	f=add(x,y);
	g=add(p,q);
	cout<<d<<endl<<e<<endl<<f<<endl<<g<<endl;
	return 0;
}
int add(char a)
{
	return (a+1);
}
int add(int i,int j,int k)
{
	return (i+j+k);
}
int add(int x,int y)
{
	return (x+y);
}
float add(float p,float q)
{
	return (p+q);
}
