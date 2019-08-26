//*********************DARKEAT - CAFE BILLING SYSTEM************************  
//author- Divyanshu Varshney
//date- 20/07/2019
//copyright- All right reserved
//mentor - Ritesham Shastri & abhishek nayir

#include<stdio.h>
#include<ctype.h>
void detail(char*,char*);
int amt;

   // login section of cafe

void login()
{
	int a=0;
	char uname[10];
	char pword[10],code[10];
	char user[10]="darkeat";
	char pass[10]="darkeat";
	
	{	
		printf("\n\t\t\t***********************************************************************************");
		printf("\n\t\t\t-----------------------------------------------------------------------------------");
		printf("\n\t\t\t     *-*-*-*-*-*-*-*-*-*-*-*-DARK EAT CAFETERIA-*-*-*-*-*-*-*-*-*-*-*-*-*");
		printf("\n \t\t\t    ------------------------    ALIGARH	 --------------------------");
		printf("\n\t\t\t****************************ONCE EAT NEVER FORGET*************************");
		printf("\n\t\t\t******************************ONLY ONE IN WORLD***************************");
		printf("\n\t\t\t*****************************COLLEGE DROP-OUT*****************************");
		printf("\n\t\t\t*******************************ENTERPRENEUR*******************************");	

		printf("\n\t\t\t-----------------------------------------------------------------------------------");
		printf("\n\t\t\t***********************************************************************************");
		
		printf("\n************************************* login section**********\t\t\t\t\n");
		printf("enter the user name: ");
		scanf("%s",uname);
		printf("\n enter the password: ");
		scanf("%s",pword);	
		if(strcmp(uname,"darkeat")==0 && strcmp(pword,"darkeat")==0)
		{
			printf("\n---------------- login succesfully----------- !!! \n\n\t\t\t **************************WELCOME TO DARK EAT*************************");
			
		}
		else
		{
			printf("\n-----------sorry,login unsuccessfully----------");
			exit(55);
		}
	
	
}
}
void bill()
{
int temp,ch,che,quantity;
//char name[20];
//double number;
FILE *fptr,*order;
fptr=fopen("menu.txt","r+");
order=fopen("bill.txt","w+");
if(!fptr)
{
	printf("\nCannot! open file");
//	exit(1);
}		

while((ch=fgetc(fptr))!=EOF)
printf("%c",ch);

fprintf(order,"\n\t\t 	ITEMS                               QUANTITY       PRICE    TOTAL");
	while(1)
{
printf("\nenter the food item code\n");
scanf("%d",&che);
if(che>=51)
{
printf("\t ~~~ FINAL BILL ~~~");
break;
}

printf("enter the quantity\n");
scanf("%d",&quantity);
switch(che)
{
	case 1:
	printf("\n\tSMOKE COOKIES\n");
	temp=120*quantity;
	amt=amt+120*quantity;
	fprintf(order,"\n\t\t\tSMOKE COOKOES:	  	             %d       *   120 =     %d",   quantity ,temp);
	break;
	case 2:
	printf("\nSMOKE CREAME BISCUIT");
	 temp=120*quantity;
	amt=amt+120*quantity;
	fprintf(order,"\n\t\t\tSMOKE Creame biscuit:                 %d       *   120 =     %d",   quantity ,temp);
	break;
	case 3:
	printf("\nSMOKE VANILLA FILLED BISCUIT");
	 temp=130*quantity;
	amt=amt+130*quantity;
	fprintf(order,"\n\t\t\tSMOKE vanilla filled biscuit:          %d       *   130 =     %d",   quantity ,temp);
	break;
	case 4:
        printf("\nSMOKE BISCUIT");
	 temp=110*quantity;
        amt=amt+110*quantity;
	fprintf(order,"\n\t\t\tSMOKE biscuit:                        %d       *   110 =     %d",   quantity ,temp);

        break;
	case 5:
        printf("\nSMOKE POPCORN");
	 temp=110*quantity;
        amt=amt+110*quantity;
	fprintf(order,"\n\t\t\tSMOKE popcorn:                        %d       *   110 =     %d",   quantity ,temp);

        break;
	case 6:
        printf("SMOKE STRAWBERRY BISCUIT");
	 temp=110*quantity;
        amt=amt+110*quantity;
	fprintf(order,"\n\t\t\tSMOKE strawberry biscuit:             %d       *   110 =     %d",   quantity ,temp);

        break;
	case 7:
        printf("MIXED FRUIT ROLL ICECREAM");
	 temp=120*quantity;
        amt=amt+160*quantity;
	fprintf(order,"\n\t\t\tSMOKE COOKOES:                         %d       *   120 =     %d",   quantity ,temp);

        break;
	case 8:
        printf("CADBURY DAIRY MILK ROLL ICECREAM");
	 temp=190*quantity;
        amt=amt+190*quantity;
	fprintf(order,"\n\t\t\tcadbury dairy milk roll ice cream:       %d       *   190 =     %d",   quantity ,temp);

        break;
	case 9:
        printf("MANGO NUTS OVERLOADED ROLL ICECREAME");
	 temp=160*quantity;
        amt=amt+160*quantity;
	fprintf(order,"\n\t\t\tmango nuts overloaded roll ice creame:    %d       *   160 =     %d",   quantity ,temp);

        break;
	case 10:
        printf("VANILLA CHOCO ROLL ICECREAM");
	 temp=180*quantity;
        amt=amt+180*quantity;
	fprintf(order,"\n\t\t\tvanilla choco roll icecream:              %d       *   180 =     %d",   quantity ,temp);

        break;
	case 11:
        printf("BANANA ROLL ICE CREAM");
	 temp=145*quantity;
        amt=amt+145*quantity;
	fprintf(order,"\n\t\t\tbanana roll ice-cream:                    %d       *   145 =     %d",   quantity ,temp);

        break;
	case 12:
        printf("BUTTER SCOTCH");
	 temp=180*quantity;
        amt=amt+180*quantity;
	fprintf(order,"\n\t\t\tbutter scotch:                            %d       *   180 =     %d",   quantity ,temp);

        break;
	case 13:
        printf("OREO NUTELLA");
	 temp=180*quantity;
        amt=amt+180*quantity;
	fprintf(order,"\n\t\t\toreo nutella:                             %d       *   180 =     %d",   quantity ,temp);

        break;
	case 14:
        printf("KITKAT COOKIE");
	 temp=180*quantity;
        amt=amt+180*quantity;
	fprintf(order,"\n\t\t\tkitkat cookie:                             %d       *   180 =     %d",   quantity ,temp);

        break;
	case 15:
        printf("FRESH STRAWBERRY");
	 temp=170*quantity;
        amt=amt+170*quantity;
	fprintf(order,"\n\t\t\tfresh strawberry:                           %d        *   170 =     %d",   quantity ,temp);

        break;
	case 16:
        printf("CHOCOLATE HOT");
	 temp=160*quantity;
        amt=amt+160*quantity;
	fprintf(order,"\n\t\t\tchocolate hot:                              %d       *   160 =     %d",   quantity ,temp);

        break;
	case 17:
        printf("COLDDRINK ICE-CREAM");
	 temp=140*quantity;
        amt=amt+140*quantity;
	fprintf(order,"\n\t\t\tcolddrink icecreame:                         %d       *   140 =     %d",   quantity ,temp);

        break;
	case 18:
        printf("MAGAI PAAN");
	 temp=130*quantity;
        amt=amt+130*quantity;
	fprintf(order,"\n\t\t\tmagai pann:                                  %d       *   130 =     %d",   quantity ,temp);

        break;
	case 19:
        printf("OREO CRUNCH");
	 temp=180*quantity;
        amt=amt+180*quantity;
	fprintf(order,"\n\t\t\toreo crunch:                                 %d       *   180 =     %d",   quantity ,temp);

        break;
	case 20:
        printf("VANILLA CARAMAL");
	 temp=160*quantity;
        amt=amt+160*quantity;
	fprintf(order,"\n\t\t\tvanilla caramal:                             %d       *   160 =     %d",   quantity ,temp);

        break;
	case 21:
        printf("BLUE BERRY");
	 temp=150*quantity;
        amt=amt+150*quantity;
	fprintf(order,"\n\t\t\tblue berry:                                 %d       *   150 =     %d",   quantity ,temp);

        break;
	case 22:
        printf("STRAWBERRY+ BLUE BERRY");
	temp=220*quantity;
	amt=amt+220*quantity;
	fprintf(order,"\n\t\t\t strawberry+blue berry:                     %d       *   220 =     %d",   quantity ,temp);
        break;
	case 23:
        printf("DELICIOUS MANGO");
	 temp=160*quantity;
        amt=amt+160*quantity;
	fprintf(order,"\n\t\t\tdelicious mango:                             %d       *   160 =     %d",   quantity ,temp);

        break;
	case 24:
        printf("PLAIN PARATHA");
	 temp=40*quantity;
        amt=amt+40*quantity;
	fprintf(order,"\n\t\t\tplain paratha:                              %d       *   40 =     %d",   quantity ,temp);

        break;
	case 25:
        printf("ALOO PARATHA");
	 temp=79*quantity;
        amt=amt+79*quantity;
	fprintf(order,"\n\t\t\taloo paratha:                               %d       *   79 =     %d",   quantity ,temp);

        break;
	case 26:
        printf("PANEER PARATHA");
	 temp=89*quantity;
        amt=amt+89*quantity;
	fprintf(order,"\n\t\tpaneer paratha:                               %d       *   89 =     %d",   quantity ,temp);

        break;
	case 27:
        printf("ONION PARATHA");
	 temp=79*quantity;
        amt=amt+79*quantity;
	fprintf(order,"\n\t\t\tonion paratha:                            %d       *   79=     %d",   quantity ,temp);

        break;
	case 28:
        printf("EGG PARATHA");
	 temp=89*quantity;
        amt=amt+89*quantity;
	fprintf(order,"\n\t\t\tegg paratha:                                %d       *   89 =     %d",   quantity ,temp);

        break;
	case 29:
        printf("MIX VEG. PARATHA");
	 temp=89*quantity;
        amt=amt+89*quantity;
	fprintf(order,"\n\t\t\tmix veg. paratha:                          %d       *   89 =     %d",   quantity ,temp);

        break;
	case 30:
        printf("PANJABI PARATHA");
	 temp=99*quantity;
        amt=amt+99*quantity;
	fprintf(order,"\n\t\t\tpanjabi paratha:                          %d       *   99 =     %d",   quantity ,temp);

        break;
	case 31:
        printf("CHOCOLATE PARATHA");
	 temp=129*quantity;
        amt=amt+129*quantity;
	fprintf(order,"\n\t\t\tchocolate paratha:                         %d       *   129 =     %d",   quantity ,temp);

        break;
	case 32:
        printf("CHEESE PARATHA");
	 temp=119*quantity;
        amt=amt+119*quantity;
	fprintf(order,"\n\t\t\tcheese paratha:                            %d       *   119 =     %d",   quantity ,temp);

        break;
	case 33:
        printf("CHICKEN PARATHA");
	 temp=159*quantity;
        amt=amt+159*quantity;
	fprintf(order,"\n\t\t\tchicken paratha:                         %d       *   159 =     %d",   quantity ,temp);

        break;
	case 34:
        printf("COCONUT LASSI");
	 temp=55*quantity;
        amt=amt+55*quantity;
	fprintf(order,"\n\t\t\tcoconut lassi:                           %d       *   55 =     %d",   quantity ,temp);

        break;
	case 35:
        printf("MANGO LASSI");
	 temp=55*quantity;
        amt=amt+55*quantity;
	fprintf(order,"\n\t\t\tmango lassi:                            %d       *   55 =     %d",   quantity ,temp);

        break;
	case 36:
        printf("KEASR LASSI");
	 temp=70*quantity;
        amt=amt+70*quantity;
	fprintf(order,"\n\t\t\tkesar lassi:                           %d       *   70 =     %d",   quantity ,temp);

        break;
	case 37:
        printf("NEPALI SALTED MILK LASSI");
	 temp=55*quantity;
        amt=amt+55*quantity;
	fprintf(order,"\n\t\t\tnepali salted milk lassi:              %d       *   55 =     %d",   quantity ,temp);

        break;
	case 38:
        printf("SPC. DARK EAT LASSI");
	 temp=80*quantity;
        amt=amt+80*quantity;
	fprintf(order,"\n\t\t\tSpc. dark eat lassi:                   %d       *   80 =     %d",   quantity ,temp);

        break;
	case 39:
        printf("CHOCO LASSI");
	 temp=70*quantity;
        amt=amt+70*quantity;
	fprintf(order,"\n\t\t\tchoco lassi:                           %d       *   70 =     %d",   quantity ,temp);

        break;
	case 40:
        printf("ROSE LASSI");
	 temp=70*quantity;
        amt=amt+70*quantity;
	fprintf(order,"\n\t\t\trose lassi:                          %d       *   70 =     %d",   quantity ,temp);

        break;
	case 41:
        printf("DRY FRUIT LASSI");
	 temp=120*quantity;
        amt=amt+120*quantity;
	fprintf(order,"\n\t\t\tdry fruit lassi:                     %d       *   120 =     %d",   quantity ,temp);

        break;
	case 42:
        printf("PUNJABI LASSI");
	 temp=70*quantity;
        amt=amt+70*quantity;
	fprintf(order,"\n\t\t\tpunjabi lassi:                       %d       *   70=     %d",   quantity ,temp);

        break;
	case 43:
        printf("VEG PAKORA");
	 temp=79*quantity;
        amt=amt+79*quantity;
	fprintf(order,"\n\t\t\tveg pakora:                        %d       *   79 =     %d",   quantity ,temp);

        break;
	case 44:
        printf("PANEER PAKORA");
	 temp=89*quantity;
        amt=amt+89*quantity;
	fprintf(order,"\n\t\t\tpaneer pakora:                     %d       *   89 =     %d",   quantity ,temp);

        break;
	 case 45:
        printf("ONION PAKORA");
	 temp=59*quantity;
        amt=amt+59*quantity;
	fprintf(order,"\n\t\t\tonion pakora:                      %d       *   59 =     %d",   quantity ,temp);

        break;
	case 46:
        printf("PANEER ONION PAKORA");
	 temp=99*quantity;
        amt=amt+99*quantity;
	fprintf(order,"\n\t\t\tpaneer onion pakora:              %d       *   120 =     %d",   quantity ,temp);
	break;
	case 47:
        printf("MASALA PAPAD DRY");
	 temp=39*quantity;
        amt=amt+39*quantity;
	fprintf(order,"\n\t\t\tmasala papad dry:                 %d       *   39 =     %d",   quantity ,temp);
	break;
	case 48:
        printf("MASALA PAPAD FRIES");
	 temp=49*quantity;
        amt=amt+49*quantity;
	fprintf(order,"\n\t\t\tmasala papad fries:               %d       *   49=     %d",   quantity ,temp);
	break;
	case 49:
        printf("CHOLE BHATURE");
	 temp=119*quantity;
        amt=amt+119*quantity;
	fprintf(order,"\n\t\t\t chole bhature:                 %d       *   119 =     %d",   quantity ,temp);
	break;
	case 50:
        printf("CHOLE KULCHE");
	 temp=79*quantity;
        amt=amt+79*quantity;
	fprintf(order,"\n\t\t\tcholekulche:                   %d       *   79 =     %d",   quantity ,temp);
	break;
  	default:
	printf("\n");
	goto x;
	break;

}


}
 //printf("finall bill");
x:
fprintf(order,"\n YOUR TOTAL BILL: %d",amt);
//printf("YOUR TOTAL BILL =%d\n",amt);
fclose(fptr);
fclose(order);
}
int main()
{
int ch;
char idname[20];
char name[40];
FILE *f;
 login();
 detail(idname,name);
 printf("\n*********************CUSTOMER DETAILS**************************************");
 printf("\n\t\tCUSTOMER NAME: %s\n",name);
 printf("\n\t\tidname: %s",idname);
 bill();
 printf("\n\tCUSTOMER NAME: %s\n",name);
 printf("\n\tidname: %s",idname);
f=fopen("bill.txt","r");
while((ch=fgetc(f))!=EOF)
	printf("%c",ch);
printf("\nTHANKS FOR YOUR COMING!!!!!");
fclose(f);
 return 0;
}

void detail(char* idname,char* name)
{
	printf("\nCUSTOMER NAME: ");
	scanf("%s",name );
	printf("\nidname: ");
	scanf("%s",idname);
}
