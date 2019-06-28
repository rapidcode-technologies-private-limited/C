#include<stdio.h>
#include<string.h>
void fun1(char str[20],int n);
int main()
{
        int i,n;
        char str[20];
        printf("enter a string\n");
        scanf("%s",str);
        n=strlen(str);
    	str[n+1]='\0';
	printf("\n total word =%d",n);
        printf("original sentence\n");
        for(i=0;i<n;i++)
        printf("%c",str[i]);
	for(i=0;i<n;i++)
	{
		if(str[i]!=' ')
			fun1(str,n);
		else
			printf("spacre");
	}
	return 0;
}
void fun1(char str[20],int n)
{
	int i;
	char str1[10],str2[10];
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
        printf("\nconvertable sentence\n");
        for(i=0;i<n;i++)
                printf("%c",str1[i]);
	 printf("\n");
}
