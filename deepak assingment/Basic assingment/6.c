
								/*programe to find GCD and LCM of two number*/

#include<stdio.h>
int main()
{
	int A,a,b,h,L;


	b:
	printf("for G.C.D press 1\t\t\t\t\tfor L.C.M press 2\n:-> ");
	scanf("%d",&A);
while(1)
{
	switch(A)
	{	
		case 1:
			
			printf("enter two no.:");
			scanf("%d%d",&a,&b);
			for(h=a<b?a:b;h>0;h--)
			{
				if(a%h==0&&b%h==0)
				{
					printf("H.C.F is %d\n",h);
					break;
				}
			}	
			break;
		case 2:
				
			        printf("enter two. no.");
       				 scanf("%d%d",&a,&b);
  			      for(L=a>b?a:b;L<=a*b;L=L=(a>b?a:b)+L)
  			      {
                			if(L%a==0&&L%b==0)
               				 {
                			        printf("L.C.M is %d\n",L);
			
                        			break;
                			}
        
        			}
				break;
		default:
			printf("wrong choice\n");
	}
	  char ch;
        ch=getchar();

	printf("you want to quite for more option then press 'O':\nu want to stop then press q");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'O':

				goto b;
		case 'q':
			
			goto c;
	}
	c:
		break;
			



}

return 0;
}	

			


