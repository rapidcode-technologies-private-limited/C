							/*program to compute sum of all number that are divisible by 5 from range1 to range2*/
				
			/*NOTE:--range1<range2*/

#include<stdio.h>
int main()
{
	int a,b,i,sum=0;
	printf("enter range1 and range2:");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{	
		

			if(i%5==0)
			     sum=sum+i;
	
	}
	printf("sum of all no. divisble by 5 is %d",sum);
	return 0;
}
	
