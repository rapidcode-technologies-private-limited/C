
			/*program to implement linear search using pointer and array*/


#include<stdio.h>
int main()
{
	int a[100],i,n,element,loc=1;
	printf("how many element\n");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",(a+i));
	}
	printf("enter a no. u want to search in %d block element:",n);
	scanf("%d",&element);
	for(i=0;i<=n-1;i++)
	{
		if(*(a+i)==element)
		{	loc=0;
			printf("search successfull and element is  %d",*(a+i));
			break;
		}
	}
	if(loc==1)
	{
		printf("element are not found (unsuccessful searching):");
	}
return 0;
}
