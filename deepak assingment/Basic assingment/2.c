					                       /*program to find area of triangle given three sides*/	

			/*NOTE:-to run this programme to use (-lm) after file name*/


#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float A,s;
	printf("enter side a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	s=a+b+c/2.0;
	A=sqrt( s*(s-a)*(s-b)*(s-c)); //include in header file <math.h>
	printf("area of triangle is:%6.2f",A);
	return 0;
}
