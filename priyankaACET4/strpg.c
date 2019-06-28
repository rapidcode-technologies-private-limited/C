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
	str[n+1]='\0';
	for(i=0;i<n;i++)
		if(str[i]=='\0')
			printf("jhuygt");
	return 0;
}
