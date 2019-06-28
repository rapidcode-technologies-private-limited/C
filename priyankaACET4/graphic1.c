#include<stdio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm=0;
	initgraph(&gd,&gm"");
	line(50,50,100,50);
	getch();
	closegraph();
	return 0;
}
