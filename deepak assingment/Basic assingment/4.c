						/*programm to find the biggest of three number*/

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a thre no.:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
		printf("biggest no. is %d",a);
	else if(b>a&&b>c)
		printf("biggest no. is %d",b);
	else
		printf("biggest no. is %d",c);
	return 0;
}	
