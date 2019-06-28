#include<stdlib.h>
#include<string.h>
#include<stdio.h>
int main()
{
	FILE*fp;
	char data;
	fp=fopen("/home/priya/Desktop/ww.c","r");
	if(fp==NULL)
		printf("ww.c file failed to open");
	else
		printf("the file is now opened.\n");
	while((data=fgetc(fp))!=EOF)
                printf("%c",data);
	printf("data successfully with in file \n");
	return 0;
}

