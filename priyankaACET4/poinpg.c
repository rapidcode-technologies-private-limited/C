#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 50
int main()
{
	char *str,st,*st1,temp;
	int n,i;
	str=(char *)malloc(SIZE*sizeof(char));
	printf("enter a string\n");
	fgets(str,SIZE,stdin);
	*(str+strlen(str)-1)='\0';
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		while(*str)
		{
			if(str[i]==' ')
			{
				i++;
				st=str[i];
				while(*str)
				{
					str++;
					if(str[i]==' ')
					i--;
					st1=str[i];		
				}	
			temp=*st;
			*st=*st1;
			*st1=temp;
			}
		}
	}
	printf("%c\t %d",str[i],n);
	return 0;
}
