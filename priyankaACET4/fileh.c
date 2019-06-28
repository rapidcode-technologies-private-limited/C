#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
        FILE*fp1,*fp2,*fp3,*fp4,*fp5,*fp6;
	int f,ad,i;
	char string[10]="good bye";
	char *data6;
        char data1,data2,data3,data4,data5,data7;
        fp1=fopen("/home/priya/Desktop/ww.c","r");
        fp2=fopen("/home/priya/Desktop/another.c","r");
        fp3=fopen("/home/priya/Desktop/filehandling.c","r");
        fp4=fopen("/home/priya/Desktop/crc.c","r");
        fp5=fopen("/home/priya/Desktop/f.c","r");
        fp6=fopen("/home/priya/Desktop/file.c","r");

	printf("press value 1 to 5\n,6 press for add some content");
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
	case 6:
		for(i=0;string[i]!='\0';i++)
			fputc(string[i],fp6);
		fgets(data6,10,fp6);
		while((data7=fgetc(fp6))!=EOF)
			printf("%c",data7);
		break;
	default:
		printf("no file is containted");
		break;
	}
	printf("now succesfully file is open");
	return 0;
}





