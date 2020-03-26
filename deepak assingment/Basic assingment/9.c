								/*program to check no. is paladrome or not*/				
#include<stdio.h>
int main()
{
	int n,r,y=0,x;
	printf("enter a no.:");
	scanf("%d",&n);
	x=n;
	while(x!=0)
	{
		r=x%10;
		y=y*10+r;//store reverse number
		x=x/10;
	}
	if(n==y)
		printf("no. is paladrome");
	else
		printf("no. is not a paladrome");
	return 0;
}	
