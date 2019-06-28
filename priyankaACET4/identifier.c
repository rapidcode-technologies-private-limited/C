#include<stdio.h>
#include<string.h>
int alpha(char);
int ALPHA(char);
int digit(char);
int main()
{
        int i,n;
        char str[15];
        printf("\n\t\t\t identifier \n");
        printf("enter a identifier\n");
        scanf("%s",str);
        n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(alpha(str[i])||(str[i]=='_')||ALPHA(str[i]))
		{
			i++;
		}
		else
		{
			printf(" NOT IDENTIFIER\n");
			break;
		}
		while(alpha(str[i])||digit(str[i])||ALPHA(str[i])||(str[i]=='_'))
		{
                	i++;
		}
		printf("IDENTIFIER\n");
	}
	return 0;
}
int  ALPHA(char s)
{
	int i;
	for(i=65;i<90;i++)
	{
		if(s==i)	
			return 1;
	}
	return 0;	
}
int  alpha(char s)
{
        int i;
        for(i=97;i<122;i++)
        {
                if(s==i)
                        return 1;
        }
        return 0;
}
int digit(char s)
{
	int i;
	for(i=48;i<57;i++)
	{
		if(s==i)
		{
			return 1;
		}
	}		
	return 0;
}
