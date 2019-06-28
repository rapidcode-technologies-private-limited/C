#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
        FILE*fp1,*fp2,*fp3,*fp4,*fp5;
        int f;
        char data1,data2,data3,data4,data5;
        fp1=fopen("/home/priya/Desktop/ww.c","r");
        fp2=fopen("/home/priya/Desktop/another.c","r");
        fp3=fopen("/home/priya/Desktop/filehandling.c","r");
        fp4=fopen("/home/priya/Desktop/crc.c","r");
        fp5=fopen("/home/priya/Desktop/f.c","r");
        printf("press value 1 to 5\n");
        scanf("%d",&f);
        switch(f)
        {
        case 1:
                while((data1=fgetc(fp1))!=EOF)
                        printf("%c",data1);
                break;
        case 2:
                while((data2=fgetc(fp2))!=EOF)
                        printf("%c",data2);
                break;
        case 3:
                while((data3=fgetc(fp3))!=EOF)
                        printf("%c",data3);
                break;
        case 4:
                while((data4=fgetc(fp4))!=EOF)
                        printf("%c",data4);
                break;
        case 5:
                while((data5=fgetc(fp5))!=EOF)
                        printf("%c",data5);
                break;
	default:
                printf("no file is containted");
                break;
        }
        printf("now succesfully file is open");
        return 0;
}

