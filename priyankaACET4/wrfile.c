#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE*fp1;
	char f;
	char data1;
	printf("enter a file");
	scanf("%s",f);
	fp1=fopen("f","r");
	while((data1=fgetc(fp1))!=EOF)
		printf("%c",data1);
	return 0;
}

