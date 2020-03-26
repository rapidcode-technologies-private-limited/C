									/*programm to print fibonacci series*/
#include<stdio.h>
int main()
{
	int n,i,a=-1,b=1,c=0;
	printf("enter a no,:");
	scanf("%d",&n);
	printf("fibonacci series is:");
	for(i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		
		
		printf("%d\t",c);
	}
	return 0;
}

