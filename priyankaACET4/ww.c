#include<stdio.h>
#include<string.h>
void rev(char a[20],int s,int l);
int main()
{
        int i,n,j;
        char str[20],str1[20],str2[10];
        printf("enter a string\n");
        scanf("%s",str);
        n=strlen(str);
        str[n+1]='\0';
	printf("original sentence\n");
	for(i=0;i<n;i++)
	printf("%c",str[i]);
	for(i=0;i<=n;i++)
	{
		if(i==0)
			str2[i]=str[i];
		str1[i]=str[n-1];
		i++;
		while(i<n)
		{
			str1[i]=str[i];
			i++;	
		}
		str1[n-1]=str2[0];
	}
	for(j=0;j<n;j++)
	{
		if(str[j]==' ')
			printf("space");
	}
		printf("\nconvertable sentence\n");
	for(i=0;i<n;i++)
		printf("%c",str1[i]);
	printf("\n");
        return 0;
}
