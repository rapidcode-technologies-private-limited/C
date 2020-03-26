				                       
                                                               /*programm to print sum of n number*/
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter a no:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum of %d number is %d",n,sum);
	return 0;
}
	

