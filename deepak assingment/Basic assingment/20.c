#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("enter two no.:");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("value of a is %d\nvalue of b is %d",a,b);
}
void swap(int*x,int*y)
{
	int c;
	c=*x;
	*x=*y;
	*y=c;
}

