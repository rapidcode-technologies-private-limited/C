#include<stdio.h>
#include<string.h>
int main()
{
	char str[15];
	int n,i;
	printf("enter a string\n");
	scanf("%s",str);
	n=strlen(str);
	printf("%s,%d,str,n);
	for(i=2;i<n;i++)
	{
		while(str)
		{
			if(str[0]==str[i])
			{
				i++;
				printf("%c %c`/^",str[i],str[0]);
				i++;	
			}		
			if(str[i]=='/')
			{
				i++;
				if(str[0]==str[i])
				{
					printf("%c %c'/^",str[i],str[0]);
				}
				else
				{
					printf("%c %c'",str[i],str[0]);
				}
			}
			i++;
		}
	}
	return 0;
}

