						/*program to find whether a given no. is prime or not*/
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter a no.:");
	scanf("%d",&n);	
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			break;
		}
	}
	if(n==i)
		printf("no is prime");
	else
		printf("no. is not a prime");
	return 0;
}
		
