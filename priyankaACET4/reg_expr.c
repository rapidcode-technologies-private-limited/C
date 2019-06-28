#include<stdio.h>
#include<string.h>
void dfa(char str[10]);
int main()
{
	int i,n;
	char str[15];
	printf("enter a string\n");
	scanf("%s",str);
	n=strlen(str);
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
	if(str[n-3]=='a')
		if(str[n-2]=='b')
			if(str[n-1]=='b')
			{
				printf("language is VALID = %s\n",str);	
				dfa(str);
			}
			else
				printf("INVALID\n");
		return 0;
}
void dfa(char str[15])
{
	int i,n;
	char f1,f2,f3,f4,f5,f6,f7;
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			if(str[i]=='a')
			{
				printf("q0--%c-->",str[i]);
				f1=str[i];
			}
			else
			{
				printf("q0--%c-->",str[i]);
				f2=str[i];
			}
			i++;
		}
		while(i<n-3)
		{
	
			while(str[i]=='b')
			{
				if(str[0]==f2)
				{
					printf("q0--%c-->",str[i]);
					f3=str[i];
					i++;
					if(str[i]=='a')
					{
						printf("q0--");	
						i++;
					}
				}
			
				else
				{
					printf("q1--%c-->",str[i]);
					i++;
				}
			}
			if(str[i]=='a')
			{
				printf("q1--");
				if(str[i]==f1)
				{	
						while(str[i]=='a')
						{		
							printf("--%c-->q1",str[i]);
							f4=str[i];
							i++;
							if(str[i]=='b')
							{
								
							}
						}
						if(str[i]=='b')
						{
							printf("--%c-->q2",str[i]);
							i++;
							if(str[i]=='a')
							{
								//printf("--%c-->q1",str[i]);
								f5=str[i];
								while(str[i]=='a')
								{
									printf("--%c-->q1",str[i]);
									i++;
									if(str[i]=='b')
									{
										printf("--%c-->q2",str[i]);		
										i++;	
											
									}
								}
							}
							if(str[i]=='b')
							{
								printf("--%c-->qf",str[i]);
								i++;
								while(str[i]=='a')
								{
									printf("--%c-->q1",str[i]);
									f6=str[i];
							}
								while(str[i]=='b')
								{
									printf("--%c-->q0",str[i]);
									f7=str[i];
								}
								i++;
							
							}
							
						}	
					}
						
				}
					
			}	
		if(i==n-3)
		{
			if(str[n-3]=='a')
			{
				if(f6=='a')
				{	
					printf("--%c-->q1",str[i]);
				}
				if(f7=='b')
					printf("--%c-->q1",str[i]);
			}	
			if(str[n-2]=='b')
			{
				printf("-->%c-->q2",str[i]);	
				if(str[n-1]=='b')
				{
					printf("-->%c-->qf",str[i]);
				}
			}
		}
		break;
	}
}
	
