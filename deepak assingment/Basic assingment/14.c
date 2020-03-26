#include<stdio.h>
int main()
{
	static char a[100],r;
	int i;
	printf("enter a string\n");
	printf("after enter string press k:");
	for(i=1;i<=100;i++)
	{
		

		
	         	scanf("%c",&a[i]);
			
			if(a[i]=='k')
				break;
				
	}
	for(i=1;i<100;i++)
	{			
		if(a[i]!=' ')
		{	r=a[i]-32;
			printf("%c",r);
		}
	}
	return 0;
}
