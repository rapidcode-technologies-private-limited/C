I#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
        FILE*fp1,*fp2,*fp3,*fp4,*fp5,*fp6;
	int f,ad,i;
	char *string="python";
	char *data6;
        char data1,data2,data3,data4,data5;
        fp1=fopen("/home/priya/Desktop/in.c","r");
	while((data1=fgetc(fp1))!=EOF)
                	printf("%c",data1);
	while(data6=data1)
		printf("%c",data6);
	while(*string)
	{
		if(*string==data6)
		{
			string++;
			printf("%s",string);
		}
	}
	return 0;
}
