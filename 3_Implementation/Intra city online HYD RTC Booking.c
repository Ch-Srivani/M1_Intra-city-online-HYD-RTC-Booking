#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char ch[10][130]={"Shamshabad Airport","Secunderabad","golconda","charminar","KPHB Colony"};
char name[32][100]={'\0'};
char number[32][2]={'\0'};
int num1[32]={0};
int busno;
void bus();
void name_number(int booking,char numstr[100]);
void booking();
int read_number(int busno);
void read_name(int busno);
void availability();
void availability_1(int busno);
void cancel();
void login()
{
	int a=0,i=0;
    char uname[10],c=' '; 
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="pass";
    do
{
	system("cls");
	
    printf("\n                         LOGIN                         ");
    printf(" \n                       USERNAME:-");
	scanf("%s", &uname); 
	printf(" \n                       PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	i=0;
		if(strcmp(uname,"RTCHYD")==0 && strcmp(pword,"123456")==0)
	{
	printf("  \n\n\n       Welcome to Intra city online HYD RTC Booking");
	printf("\n\n\n\t\t\t\tPress any key to continue");
	getch();
	break;
	}
	else
	{
		printf("\n        User name or Password is incorrect");
		a++;
		
		getch();
		
	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");
		
		getch();
		
		}
		system("cls");	
}
int main()
{
	login();
    int num,i;
    do{
    system("cls");
    printf("\n\n\n");
   printf("                                    Welcome to Intra city online HYD RTC Booking                                        \n\n\n");
    printf("\t\t\t\t\t[1]=> View Location with bus list\n");
    printf("\n");
    printf("\t\t\t\t\t[2]=> Book Tickets\n");
    printf("\n");
    printf("\t\t\t\t\t[3]=> Cancel Recent Booking\n");
    printf("\n");
    printf("\t\t\t\t\t[4]=> Bus seat Availability\n");
    printf("\n");
    printf("\t\t\t\t\t[5]=> Exit\n\n");
    printf("\t\t\tEnter Your Choice:: ");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        bus();
        break;
    case 2:
        booking();
        break;
    case 3:
        cancel();
        break;
    case 4:
        availability();
        break;
    }
getch();
    }while(num != 5);
    system("CLS");
    printf("\t\t\t\t\tThank You For your booking HAPPY JOURNEY\t\t\t\t\t\t\n");
    getch();
    return 0;
}


void bus()
{
    system("cls");
    printf("\n\n\n");
    printf("                                Welcome to Intra city online HYD RTC Booking                                       \n\n\n");
    printf("\t\t\t\t\t[1]  =>  %s\n",ch[0]);
    printf("\n");
    printf("\t\t\t\t\t[2]  =>  %s\n",ch[1]);
    printf("\n"); 
	printf("\t\t\t\t\t[3]  =>  %s\n",ch[2]);
    printf("\n"); 
	printf("\t\t\t\t\t[4]  =>  %s\n",ch[3]);
    printf("\n"); 
	printf("\t\t\t\t\t[5]  =>  %s\n",ch[4]);
}

void booking()
{

    int i=0;
    char numstr[100];
system("cls");
printf("                                           Welcome to Intra city online HYD RTC Booking                                           \n\n\n");
bus();
printf("Enter the Bus number:--->");
scanf("%d",&busno);
system("cls");
printf("                                           Welcome to Intra city online HYD RTC Booking                                           \n\n\n");
printf("Your Bus Number is %d ********** %s",busno,ch[busno-1]);
availability_1(busno);
 FILE *f1, *fopen();
 char str1[80]="32",str2[4],str3[4];
 int seat1,seat2,booking=0;
if(busno == 1)
{
 f1 = fopen("tr1.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}else if(busno == 2)
{
 f1 = fopen("tr2.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}else if(busno == 3)
{
 f1 = fopen("tr3.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}
else if(busno == 4)
{
 f1 = fopen("tr4.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}
else if(busno == 5)
{
 f1 = fopen("tr5.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}
seat1=atoi(str1);
if(seat1 <= 0)
{
 printf("There is no blank seat in this bus ");
}else
{
printf("\n\n\n\t\t\t\tAvailable Seats:------>%d\n",seat1);
printf("\n\t\t\t\tNumber of Tickets:----->");
scanf("%d",&booking);
printf("\n");

seat1=seat1-booking;
itoa(busno,numstr,10);
name_number(booking,numstr);
printf("\n\t\t\t\tThe Total booking amount is %d",125*booking);
itoa(seat1, str1, 10);
if(busno==1)
{
 f1 = fopen("tr1.txt","w");
 fputs(str1,f1);
 fclose(f1);
}
else if(busno==2)
{
 f1 = fopen("tr2.txt","w");
 fputs(str1,f1);
  fclose(f1);
}
else if(busno==3)
{
 f1 = fopen("tr3.txt","w");
 fputs(str1,f1);
  fclose(f1);
}
else if(busno==4)
{
 f1 = fopen("tr4.txt","w");
 fputs(str1,f1);
  fclose(f1);
}
else if(busno==5)
{
 f1 = fopen("tr5.txt","w");
 fputs(str1,f1);
 fclose(f1);
}
}
}



void name_number(int booking,char numstr[100])
{
char tempstr[100],tempstr1[12]="status",tempstr2[12]="number";
int number;
    FILE *a,*b;
    int i=0;
   strcat(numstr,".txt");
   strcat(tempstr1,numstr);
   strcat(tempstr2,numstr);
   a = fopen(tempstr1,"a");
   b = fopen(tempstr2,"a");
for(i=0; i<booking; i++)
{
    printf("                              Enter the details for ticket no %d                                     \n\n\n",i+1);
      printf("\t\t\t\tEnter the seat number:--->");
      scanf("%d",&number);
      printf("\t\t\t\tEnter the name of person:--->");
      scanf("%s",name[number-1]);
    printf("\n");
      itoa(number, tempstr, 10);
      fprintf(a,"%s ",name[number-1]);
      fprintf(b,"%s ",tempstr);

}
fclose(a);
fclose(b);
}



int read_number(int busno)
{
char tempstr[100],tempstr2[12]="number";
FILE *a,*b;
char numstr[100];
int i=0,j=0,k;
itoa(busno,numstr,10);
strcat(numstr,".txt");
strcat(tempstr2,numstr);
a = fopen(tempstr2,"a+");
   while(!feof(a))
   {
      number[i][j] = fgetc(a);

      if(number[i][j] == ' ')
      {
          j=0;
          i++;
      }
      else
      {
      j++;
      }
   }
   k=i;
   for(i=0; i<k; i++)
   {
       num1[i] = atoi(number[i]);
   }
   fclose(a);
   return k;
}


void read_name(int busno)
{
char tempstr1[12]="status";
FILE *b;
char numstr[100];
int i=0,j=0,k=0;
itoa(busno,numstr,10);
strcat(numstr,".txt");
strcat(tempstr1,numstr);
b = fopen(tempstr1,"a+");
   while(!feof(b))
   {
      name[i][j] = fgetc(b);

      if(name[i][j] == ' ')
      {
          j=0;
          i++;
      }
      else
      {
        j++;
      }

   }
   name[i][j]='\0';
   k=i;
   fclose(b);
}

void availability()
{
system("cls");
printf("                                       Welcome to Intra city online HYD RTC Booking                                      \n\n\n");
    int i,busno,index=0,j;
    printf("Enter the number of bus:---->");
    scanf("%d",&busno);
    j=read_number(busno);
    read_name(busno);
    printf("____________________________________________________________________________________________________________________\n");
    printf("                                      Bus.no-->%d---->%s                                                            \n",busno,ch[busno-1]);
    printf("____________________________________________________________________________________________________________________\n");
    char tempname[33][10]={"Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty "};
    for(i=0; i<j; i++)
    {
        strcpy(tempname[num1[i]],name[i]);
    }
    for(i=0; i<8; i++)
    {
        printf("\t\t\t\t");
        for(j=0; j<4; j++)
            {
        printf("%d.%s\t",index+1,tempname[index+1]);
        index++;
            }
            printf("\n");
    }
}

void availability_1(int busno)
{
    printf("Your Bus Number is %d ********** %s",busno,ch[busno-1]);
    system("cls");
printf("                                     Welcome to Intra city online HYD RTC Booking                                         \n\n\n");
    int i,index=0,j;
    j=read_number(busno);
    read_name(busno);
    char tempname[33][10]={"Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty "};
    for(i=0; i<j; i++)
    {
        strcpy(tempname[num1[i]],name[i]);
    }
    for(i=0; i<8; i++)
    {
        printf("\t\t\t\t");
        for(j=0; j<4; j++)
            {
        printf("%d.%s\t",index+1,tempname[index+1]);
        index++;
            }
            printf("\n");
}
}


void cancel()
{
 int seat_no,i,j;
 char numstr[100],tempstr2[15]="number",tempstr1[15]="status";
 printf("Enter the bus number:---->");
 scanf("%d",&busno);
 itoa(busno,numstr,10);
 strcat(numstr,".txt");
 strcat(tempstr1,numstr);
 strcat(tempstr2,numstr);
 read_number(busno);
 read_name(busno);
 availability_1(busno);
 printf("Enter the seat number:--->");
 scanf("%d",&seat_no);
 FILE *a,*b;
 a = fopen(tempstr1,"w+");
 b = fopen(tempstr2,"w+");
 for(i=0; i<32; i++)
 {
     if(num1[i] == seat_no)
     {
         for(j=0; j<32; j++)
         {
             if(num1[j] != seat_no && num1[j] != 0)
             {
                 fprintf(b,"%d ",num1[j]);
                 fprintf(a,"%s",name[j]);
             }
             else if(num1[j] == seat_no && num1[j] != 0)
             {
                 strcpy(name[j],"Empty ");
             }
         }
     }
 }
fclose(a);
fclose(b);
printf("\n\n");
 printf("\t\t\t\tYour amount has been Refunded\t\t\t\n");
 }

