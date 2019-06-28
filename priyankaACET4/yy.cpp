#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 50
char *my_strcat(char *,char *);
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

int main()
{
        FILE*fp1,*fp2;
        char data1,data2;
        char *file1,*file2;
        printf("enter path");
        char *f1=(char*)malloc(SIZE*sizeof(char));
        printf("enter a string\n");
        fgets(f1,SIZE,stdin);
        *(f1+strlen(f1)-1)='\0';
        char *f2,*f3;
        printf("%s\n",f1);
        printf("enter a 1 file\n");
        file1=(char*)malloc(SIZE*sizeof(char));
        fgets(file1,SIZE,stdin);
        *(file1+strlen(file1)-1)='\0';
        printf("%s\n",file1);
        f2=my_strcat(f1,file1);
        printf("%s\n",f2);
        printf("yes");
	fp1=fopen("f2","r");
	while((data1=getc(fp1))!=EOF)
		printf("%s",data1);
	return 0;
}
