							/*programe to print sum of even no. and odd no. frome 0 to n*/
#include<stdio.h>
int main()
{
	int n,i,e=0,o=0;
	printf("enter a no.:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)	
			e=e+i;
		else
			o=o+i;
	}
	printf("sum of even no. is %d\nsum of odd no. is %d",e,o);
	return 0;
}
