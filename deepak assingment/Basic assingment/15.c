							                 /*program to reverse a string*/
			/*NOTE:-- why static use? because in array free space occupied G.V and after use static by default free space occupied 0 and ascii of 0 is " " */

  
#include<stdio.h>
int main()
{
	static char a[100];
	int i;
	printf("enter a string\n:");
        printf("after enter string press 0 to check reverse string:");
	
	for(i=100;i>=1;i--)
	{
		scanf("%c",&a[i]);
		if(a[i]=='0')
			break;
	}


	for(i=1;i<=100;i++)
	{
		if(a[i]!=' ')
		{
			printf("%c",a[i]);
		}
	}
}
