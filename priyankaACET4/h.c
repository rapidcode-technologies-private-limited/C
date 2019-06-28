#include<stdio.h>
#include<string.h>
int main()
{
        int i,n;
        char str[15],q0,q1,q2,qf,x,y;
        printf("\n\n\t\t\tregular expression\n\n");
        printf("enter a string\n");
        scanf("%s",str);
        n=strlen(str);
        if(n>=3)
        {
        for(i=0;i<n;i++)
        {
                if(str[i]=='a'||str[i]=='b')
                {}
                else
                {
                        printf("invalid \n");
                        return;
                }
        }
	if(str[0]=='a'||str[0]=='b')
        {
               if(str[0]=='a')
		{
                        printf("q0 -->%c--> ",str[0]);
			x=str[i];	
		}	
                else
		{
                      printf("q0 -->%c--> ",str[0]);
			y=str[i];
		}
	}
        for(i=1;i<n-3;i++)
	{
		if(str[i]=='a'||str[i]=='b')
		{
			while(str[i]=='a')
			{
				if('a'==str[i])
				{
					printf("q1 -->%c--> ",str[i]);
					
					i++;
				}
				else
				{
					printf("q0 -->%c--> ",str[i]);
					i++;
				}
			}
			while(str[i]=='b')
			{
				if('b'==str[i])
                                {
                                        printf("q0 -->%c--> ",str[i]);
                                        i++;
                                }
                                else
                                {
                                        printf("q1 -->%c--> ",str[i]);
                                        i++;
                                }

			}
		}
	}
	if(str[n-3]=='a')
        {
                q0=str[n-3];
                printf("q0 -->%c--> ",str[n-3]);
                if(str[n-2]=='b')
                {
                        q1=str[n-2];
                        printf("q1 -->%c--> ",str[n-2]);
			if(str[n-1]=='b')
                        {
                                 q2=str[n-1];
                                   printf("q2 -->%c-->qf \n",str[n-1]);
                        }
                }
        }
	}
        printf("\n");
        return 0;
}

