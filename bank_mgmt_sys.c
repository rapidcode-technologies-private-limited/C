#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 50

int pass_verification(char*,char*);
char* pass_saved="wo ai ni";

struct create_account
{
char FirstName[15];
char LastName[15];
long int AadharNo;
char PanNumber[15];
int dd,mm,yyyy;
char House[10];
char Locality[20];
char City[20];
int Amount;
char pin[6];
};
int i=0;
typedef struct create_account form;
void Delete_Account(void);
void Generate_Account(void);
void Update_Account(void);
void Display(int);
form detail[100];
int Acc_No=0;
void Display_List(void);
void delay(void);
void update(int,int);
void print(void);
int main()
{
        int confirm,choice,j;
        char *pass=(char*)malloc(SIZE);
        printf("----------WELCOME TO THE BANK----------\n");
        printf("User Id- 324608\n");
        there:
        printf("Enter the password: ");
        fgets(pass,SIZE,stdin);

        *(pass+strlen(pass)-1)='\0';
        confirm=pass_verification(pass,pass_saved);

        if(confirm==1)
        {
                printf("Password Verified\n");
                while(1)
                {
                        printf("---------------CHOOSE OPTIONS BELOW---------------\n");
                        printf("\n\n");
			x:
                        printf("\t1.Create New Account\n");
                        printf("\t2.Edit Existing Account\n");
                        printf("\t3.Withdraw Money\n");
                        printf("\t4.Deposit Money\n");
                        printf("\t5.MONEY IN BANK\n");
                        printf("\t6.Display List\n");
			printf("\t7.Delete Account\n");
			printf("\t8.log out\n");
			printf("Enter the choice: ");
                        scanf("%d",&choice);
			 switch(choice)
                        {
                        case 1:
			Acc_No++;
			i++;
			Generate_Account();
                        break;
                      case 2:Update_Account();
                	     break;
                /*      case 3:Withdrawl();
                        break;
                        case 4:Deposit();
                        break;
                        case 5:MoneyInBank();
                        break;*/
			case 6:
			for(j=0;j<Acc_No;j++)
			Display(j);
			delay();
			break;
                        case 7:Delete_Account();
                        break;
                        default:printf("\n--------Invalid Choice-------\n");
                        goto x;
			}

		
        	}
	}
        else
        {
                printf("WRONG PASSWORD\n");
                goto there;
        }
        return 0;
}

int pass_verification(char* password,char* pass_pre)
{
	while(*password!='\0'||*pass_pre!='\0')
	{	
		if(*password!=*pass_pre)		
			return 0;
		password++;	
		pass_pre++;
}
	if(*password=='\0'&&*pass_pre=='\0')
		return 1;
}


                                                                          
void Generate_Account()
{
        
        FILE *fptr;
        fptr=(fopen("data.txt","w+"));
	if(fptr==NULL)
	{
		printf("Error!");
	}
        printf("------------------FORM 16------------------");
        printf("\n\n\tFirst Name: ");
        scanf("%s",detail[i].FirstName);
        printf("\n\tLast Name: ");
        scanf("%s",detail[i].LastName);
        printf("\n\tAadhar Number: ");
        scanf("%ld",&detail[i].AadharNo);
        {
                printf("\n\tInvalid Aadhar Number \n");
                
        }
        printf("\n\tPAN Number: ");
        scanf("%s",detail[i].PanNumber);
        printf("\n\tDate of birth   dd mm yyyy: ");
        printf("\n\t");
        scanf("%d",&detail[i].dd);
        scanf("%d",&detail[i].mm);
        scanf("%d",&detail[i].yyyy);
	fflush(stdin);
        printf("\n\tADDRESS: ");
	// printf("House Number: ");
        scanf("%s",detail[i].House);
	fflush(stdin);
        scanf("%s",detail[i].Locality);
	fflush(stdin);
	scanf("%s",detail[i].City);
        fflush(stdin);
        
        printf("Amount ");
        scanf("%d",&detail[i].Amount);
	fflush(stdin);
	printf("\n\t Generate Acces PIN:");
	scanf("%s",&detail[i].pin); 
	print();
}
//printing all the details in a file 
void print()
{
         FILE *fptr;
        fptr=(fopen("data.txt","w+"));
        if(fptr==NULL)
        {
                printf("Error!");
        }
	for(i=0;i<Acc_No;i++);
        fprintf(fptr,"%d",Acc_No);
        fprintf(fptr,"%s%s",detail[i].FirstName,detail[i].LastName);
        fprintf(fptr,"%d%s",detail[i].AadharNo,detail[i].PanNumber);
        fprintf(fptr,"%d/%d/%d",detail[i].dd,detail[i].mm,detail[i].yyyy);
        fprintf(fptr,"%s%s%s%s",detail[i].House,detail[i].Locality,detail[i].City,detail[i].pin);
//	fprintf(fptr,"%d",detail[i].pin);
        fprintf(fptr,"%d",detail[i].Amount);
        
        fclose(fptr);
	printf("\n\tAccount Created Sucessfully!\n");
        printf("\n\t----------------------REVIEW--------------------\n\n\n");
	Display(i);
	delay();
}

void Display(int j)
{
	

	printf("Account Number: %d \n",j);
	if(pass_verification(detail[j].FirstName,"null"))
	{
		printf("Account doesn't Exist!\n");
		
	}
	else
	{
	
        	printf("\tName = %s %s",detail[j].FirstName,detail[j].LastName);
        	printf("\n\tAadhar Number: %d \n\t PAN Number: %s",detail[j].AadharNo,detail[j].PanNumber);
        	printf("\n\tDOB: %d/%d/%d",detail[j].dd,detail[j].mm,detail[j].yyyy);
        	printf("\n\tAddress: %s %s %s\n ",detail[j].House,detail[j].Locality,detail[j].City);
        	printf("\tPIN : %s\n",detail[j].pin);
        	printf("\n\tAmount: %d\n\n",detail[j].Amount);
	
	
	
	}
        
	delay();
}

void Delete_Account(void)
{
	int del,new;
	printf("\nEnter Account Number: ");
	scanf("%d",&del);
	new=del-1;
	strcpy(detail[new].FirstName,"null");
	printf("Account delete Sucessfull!");
	delay();
}
void delay(void)
{
	long int i;
for(i=0;i<1000000000;i++);

}

                                                                         
void Update_Account(void)
{
        int acc,choice;
        printf("\n\tEnter the Account Number: ");
        scanf("%d",&acc);
               
       
        printf("\n\tChoose the options below");
        printf("\n1.First Name\n2.Last Name\n3.Aadhar Number\n4.PAN-Number\n5.PIN");
        scanf("%d",&choice);
	update(acc,choice);
}
void Withdrawl()
{
char *p=(char*)malloc(6);
	int ac;
	printf("\n\tAccount Number: ");
	scanf("%d",&ac);
	x:
	printf("Enter PIN: ");
	scanf("%s",p);
	if(pass_verification(detail[ac].pin,p)==1)
	{
	if(detail[i].Amount<=1000)
	{
		printf("Insufficient Balancse!");
		return;
	}
	else
	{
		update(ac,-1);
}
	}
	else {
	printf("Invalid PIN!\n");
	goto x;
}
}
void Deposit(void)
{
	int ac;
	printf("\n\tAccount Number: ");
	scanf("%d",&ac);
	update(ac,0);
}
void update(int acc , int choice)
{
	char *up=(char*)malloc(20);
	FILE *old,*new;
	old=fopen("data.txt","r+");
	new=fopen("data.txt","w");
	int amt;
	switch(choice)
        {
	case -1:
	printf("\n\tEnter Withdrawl Amount\n");
	scanf("%d",&amt);
	detail[acc].Amount=detail[acc].Amount-amt;
	break;
	case 0:
	printf("\n\tEnter Deposit Amount\n");
	scanf("%d",&amt);
	detail[acc].Amount+=amt;
	break;
        case 1:
        printf("\n\tEnter First Name: ");
        scanf("%s",up);
	strcpy(detail[acc].FirstName,up);
       	 break;
        case 2:
        printf("\n\tLast Name: ");
	scanf("%s",up);
        strcpy(detail[acc].LastName,up);
         break;
        case 3:
        printf("\n\tAadhar Number: ");
        scanf("%d",&detail[acc].AadharNo);
        break;
 	case 4:
        printf("\n\tPAN Number");
        scanf("%s",detail[acc].PanNumber);
        break;
        default: printf("\n\tInvalid Choice!");
        }	
	Display(acc);
}
