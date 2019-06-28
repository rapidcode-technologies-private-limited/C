#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 10
char *my_strcat(char *,char *);
int main()
{
	char *s1=(char*)malloc(SIZE*sizeof(char));
	printf("enter a string\n");
	fgets(s1,SIZE,stdin);
	*(s1+strlen(s1)-1)='\0';
	char *s2=(char*)malloc(SIZE*sizeof(char));
        printf("enter a string\n");
        fgets(s2,SIZE,stdin);
        *(s2+strlen(s2)-1)='\0';
	printf("%s\n",my_strcat(s1,s2));
	return 0;
}
char *my_strcat(char *s1,char *s2)
{
	char *p=s1;
	while(*s1!='\0')
		s1++;
	while(*s2!='\0')
	{
		*s1=*s2;
		s1++;
		s2++;
	}
	*s1='\0';
	return p;
}
