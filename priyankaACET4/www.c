#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SI 20
void fun1(char *);
int main()
{
        int n,i;
        char *p,*s,*s1,*s2,*q,*r;
        s=(char*)malloc(SI*sizeof(char));
        printf("enter\n");
        fgets(s,SI,stdin);
        *(s+strlen(s)-1)='\0';
        n=strlen(s);
        printf("%s%d",s,n);
	p=s;q=s;r=s;
	q=s1;
//	r=s2;
	if(*s)
	{
		while(*s!=' ')
		{
			*s1=*s;
			s++;
			s1++;
		}
	//	fun1(s1);
		*s1='\0';
		printf("%s",q);
	//	while(*s==' ')	
	//	{
	//		s++;
	//		while(*s!=' ')
	//		{
	//			*s2=*s1;
	//			s++;
	//			s2++;
	//		}
	//	}
	//	fun1(s2);
	//	*s2='\0';
		printf("%s",r);
 	//	if(*s=='\0')
  	//		{}
	}
	*s='\0';
 	printf("%s",*p);
	return 0;
}
/*void fun1(char *str)
{
	int i,m,j=0;
	char *str1,*p;
	*(str+strlen(str)-1)='\0';
	m=strlen(str);
	printf("%s",str);
	*p=*str;
	for(i=0;i<m;i++)
	{
		if(i==0)
		{
			*(str1+i)=*(str+m-1);
			str++;
			str1++;
			i++;
		}
		while(i<m-1)
		{
			*str1=*str;
			str++;
			str1++;
			i++;
		}
		if(i==m-1)
		{
			*(str+m-1)=*(str+j);
			str++;
			str1++;
			i++;
		}
		if(*(str+i)=='\0')
		{}
	}
	for(i=0;i<m;i++)
 		printf("%c",*(p+i));
}
*/
