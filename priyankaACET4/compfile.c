#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
        FILE*fp1,*fp2;
        char data1,data2;
        fp1=fopen("/home/priya/Desktop/ww.c","r");
        fp2=fopen("/home/priya/Desktop/ww.c","r");
	if((data1=fgetc(fp1))==(data2=fgetc(fp2)))
		printf("file is same content");
	else
		printf("file i not same");
	
	return 0;
} 

