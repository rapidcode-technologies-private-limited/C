
						/*program to implement binary search*/

#include<stdio.h>
int main()
{
	int A[100],l,u,n,m,item;
	printf("how many element in array\n");
	scanf("%d",&n);
	
	for(l=0;l<n;l++)
	{
		scanf("%d",&A[l]);
	}
	printf("enter element u want to search\n");
	scanf("%d",&item );
	l=0;
	u=n-1;
	m=l+u/2;
	while(l<=u)
	{


		if(A[m]==item)
		{
			printf("searching is successfull with element is %d and location is %d",item,m);
			break;
		
		}
		else if(A[m]>item)
		{
			u=m-1;
			
		}
		else
		{
			l=m+1;
		
		}
		m=l+u/2;
	}
	if(l>u)
//	{
		printf("searching is not a found");
//	}
	return 0;
}	
			
