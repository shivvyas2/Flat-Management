#include<dos.h>
#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>

//Global variables............
double advance[5]={7550000,550000,150000,50000,8550000};
int  r_no[5]={1,2,3,4,5};
int room;
tot[5]={0,0,0,0,0};
int g_tot=0;
double  r_charge[5];
char r_type[5][7];
char r_cust[5][20]={"N.A","N.A","N.A","N.A","N.A"};
char c_city[5][20];
char name[30];
int c_mem[5];
char c_nat[5][20];
char r_avail[5];
int  r_per[5];
int  no[5];
int year[5];
int month[5];
int day[5];
int i;

//Function prototypes.........
void getavail();
void putavail();
void features();
void allocate();
void putcust();
void restaurant();
void deallocate();
void cancel();
void intro();
void screenheader();

//Function definitions..........
void screenheader()
{

     printf("\n \n \n Welcome to ABC Flat");
 }
void intro()
 {
   printf("\n\t\ Near Tripada International School,\n\t\t\t\t Ahmedabad 380061, Ahmedabad");
   printf("\n\n \t\t Ph. No: 9898939683");
   printf("\n\n\n            .............. WELCOMES YOU..............");
   printf("\n\n\n\t ABC Flats are one of the best flat in Ahmedabad. They are \t\tequipped with with all the general amenities and facilities that go \t\talong with your lifestyle.  \t");
   printf("\n\n\tThe flats are spacious have well furnished rooms along pleasent \tviews of the city.");
   printf("           \n        \t\t               Amenities             ");
   printf("\n\t\t\t1. 100% Power backup.\n");
   printf("\t\t\t2. Automatic lift.\n");
   printf("\t\t\t3. Ample parking space.\n");
   printf("\t\t\t4. Round the clock security.\n");
   printf("\t\t\t5. Running hot and cold water.\n");
   printf("\t\t\t6. Free internet service.\n");
   printf("\t\t\t7. 24 hours security service.\n");
   printf("\t\t\t8. Laundary service.\n");
   printf("\nPress any character to continue:");
   getch();
 }
void getavail()
 {
   for(i=0;i<5;i++)
     {
       if(r_no[i]==1)
 {
   strcpy(r_type[i],"4BHK");
   r_charge[i]=15000000;
   if(strcmp(r_cust[i],"N.A")==0)
     {
       r_avail[i]='Y';

     }
 }
       else if(r_no[i]==2)
 {
   strcpy(r_type[i],"3BHK");
   r_charge[i]=5000000;
   if(strcmp(r_cust[i],"N.A")==0)
     {
       r_avail[i]='Y';

     }
 }
       else if(r_no[i]==3)
 {
   strcpy(r_type[i],"2BHK");
   r_charge[i]=2500000;
   if(strcmp(r_cust[i],"N.A")==0)
     {
       r_avail[i]='Y';

     }
 }
       else if(r_no[i]==4)
 {
   strcpy(r_type[i],"1BHK");
   r_charge[i]=1500000;
   if(strcmp(r_cust[i],"N.A")==0)
     {
       r_avail[i]='Y';

     }
 }
       else if(r_no[i]==5)
 {
   strcpy(r_type[i],"5BHK");
   r_charge[i]=25000000;
   if(strcmp(r_cust[i],"N.A")==0)
     {
       r_avail[i]='Y';

     }
 }
     }
 }
void putavail()
 {
   clrscr();
   screenheader();
   printf("\n                          FLAT AVAILABILITY");
   printf("\n                         -------------------");
   printf("\nRoom No| Type | Rate | Availability | Cust_Name ");
   for(i=0;i<5;i++)
     {
       printf("\n%d\t",r_no[i]);
       cputs(r_type[i]);
       if(i==0)
 printf("    %d\t%c\t     ",r_charge[i]);
       if((i==1) || (i==2))
 printf("       %d\t   %c\t        ",r_charge[i]);
       if(i==3 || i==4)
 printf("     %d\t %c\t      ",r_charge[i]);
       cputs(r_cust[i]);
       if((i==1) || (i==2))
 printf("\t %d");
       else if((i==3) || (i==4))
 printf("\t       %d");
       else
 printf("\t      %d");
     }
 }
void features()
 {
   int typ;
   clrscr();
   screenheader();
   printf("\nChoose the flat type:\n1. 4BHK\n2. 3BHK");
   printf("\n3. 1BHK\n4. 5BHK\n5. 2BHK\n");
   scanf("%d",&typ);
   if(typ>5)
     {
       printf("\nWrong choice!! Choose a number between 1-5:");
       features();
     }
   switch(typ)
     {
       case 1:clrscr();
      screenheader();
      printf("\n Flat number            >>> 1");
      printf("\n Token Amount           >>> 75,50,000\n\n");
      printf("\n                      FEATURES OF THIS FLAT                     ");
      printf("\n------------------------------------------------------------------");
      printf("\n\n Flat Type            >>> 4BHK");
      printf("\n\n Flat Price           >>> Rs.1,50,00,000 ");
      printf("\n\n 1. No of Rooms       >>> 4 Bedroom , 1 Hall , 1 Kitchen   ");
      printf("\n\n 2.Space Area         >>> 260 sq yard");


      break;
       case 2:clrscr();
      screenheader();
      printf("\n Flat number            >>> 2\n\n");
      printf("\n Token Amount           >>> 5,50,000\n\n");
      printf("\n                      FEATURES OF THIS FLAT                      ");
      printf("\n-------------------------------------------------------------------");
      printf("\n\n Flat Type            >>> 3BHK                                     ");
      printf("\n\n Flat Price           >>> Rs.50,00,000 ");
      printf("\n\n 1.No of Rooms        >>> 3 BedRoom , 1 Hall , 1 Kitchen");
      printf("\n\n 2.Space Area         >>> 200 sq yard");
      printf("\n-------------------------------------------------------------------");

      break;
       case 3:clrscr();
      screenheader();
      printf("\n Flat number            >>> 3\n\n");
      printf("\n Token Amount           >>> 1,50,000\n\n");
      printf("\n                      FEATURES OF THIS FLAT                       ");
      printf("\n-------------------------------------------------------------------");
      printf("\n\n Flat Type            >>> 2BHK                                   ");
      printf("\n\n Flat Price           >>> Rs.25,00,000");
      printf("\n\n 1.No of Rooms        >>> 2 BedRoom , 1 Hall , 1 Kitchen");
      printf("\n\n 2.Space Area         >>> 107 sq yard");
      printf("\n-------------------------------------------------------------------");
      break;
       case 4:clrscr();
      screenheader();
      printf("\n Flat number            >>> 4\n\n");
      printf("\n Token Amount           >>> 50,000 \n\n");
      printf("\n                      FEATURES OF THIS FLAT                       ");
      printf("\n-------------------------------------------------------------------");
      printf("\n\n Flat Type            >>> 1 BHK                                     ");
      printf("\n\n Flat Price           >>> Rs.15,00,000");
      printf("\n\n 1.No of Rooms        >>> 1 BedRoom 1 Hall 1 Kitchen    ");
      printf("\n\n 2.Space Area         >>> 85 sq yard");
      printf("\n-------------------------------------------------------------------");
      break;
       case 5:clrscr();
      screenheader();
      printf("\n Flat number            >>>5\n\n");
      printf("\n Token Amount           >>>85,50,000 \n\n");
      printf("\n                      FEATURES OF THIS FLAT                      ");
      printf("\n-------------------------------------------------------------------");
      printf("\n\n Flat Type            >>> 5 BHK                                    ");
      printf("\n\n Flat Price           >>> Rs.2,50,00,000");
      printf("\n\n 1.No of Rooms        >>> 5 BedRoom 1 Hall 1 Kitchen");
      printf("\n\n 2.Space Area         >>> 300 sq yard");
      printf("\n-------------------------------------------------------------------");
      break;
     }
 }
void allocate()
 {
   clrscr();
   screenheader();
   getavail();
   printf("\n Enter the flat number in which you want to buy:");
   scanf("%d",&room);
   if(r_avail[room-1]=='Y')
     {
       fflush(stdin);
       printf("\n Enter Name  :");
       gets(r_cust[room-1]);
       printf("\n Enter city name :");
       gets(c_city[room-1]);
       printf("\n Enter nationality :");
       gets(c_nat[room-1]);
       printf("\n Enter the no of room required :");
       scanf("%d",&c_mem[room-1]);
       if((room==4)||(room==2)||(room==3))
 if((c_mem[room-1]<1)||(c_mem[room-1]>5))
   {
     printf("\n %d members cannot be allocated this room.Allowed members are between 1-5.",c_mem[room-1]);
     getch();
     allocate();
   }
       else if((room==1)||(room==5))
 if((c_mem[room-1]<=4)||(c_mem[room-1]>=5))
   {
     printf("\n %d No of Rooms are 4 and 5.",c_mem[room-1]);
     getch();
     allocate();
   }
       printf("\n Enter the date of token :");
       printf("\n------------------------------");
       printf("\n Year : ");
       scanf("%d",&year[room-1]);
       printf("\n Month :");
       scanf("%d",&month[room-1]);
       printf("\n Day :");
       scanf("%d",&day[room-1]);
       if((year[room-1]>9999)||(month[room-1]>12)||(month[room-1]<1)||(day[room-1]<1)||(((month[room-1]==1)||(month[room-1]==3)||(month[room-1]==5)||(month[room-1]==7)||(month[room-1]==8)||(month[room-1]==10)||(month[room-1]==12))&&(day[room-1]>31))||(((month[room-1]==4)||(month[room-1]==6)||(month[room-1]==9)||(month[room-1]==11))&&(day[room-1]>30))||((month[room-1]==2)&&((year[room-1]%400==0)||((year[room-1]%4==0)&&(year[room-1]%100!=0)))&&(day[room-1]>29))||((month[room-1]==2)&&(year[room-1]%4!=0)&&(day[room-1]>28)))
 {
   delay(200);
   printf("\n\n!!!!!INVALID DATE........");
   getch();
   allocate();
 }
       else
 {
   printf("\n... Flat is sold to ");
   cputs(r_cust[room-1]);
   printf(" for %d days till the full amount is paid.",r_per[room-1]);
   r_avail[room-1]='N';
   getch();
 }
     }
   else
     {
       printf("\n ERROR :Flat cannot be allocated ...");
       printf("\n Flat is not available...");
       getch();
     }
 }
void deallocate()
 {
   clrscr();
   screenheader();
   printf("\nEnter the flat number:");
   scanf("%d",&room);
   if(r_cust[room-1]=="N.A")
     {
       printf("\nThe flat is empty........");
       getch();
     }
   else
     {
       printf("\nEnter the name of person purchasing flat:");
       fflush(stdin);
       gets(name);
       if(strcmpi(name,r_cust[room-1])==0)
 {
   printf("\nFlat number %d is deallocated......",room);
   strcpy(r_cust[room-1],"N.A");
   getch();
 }
       else
 {
   printf("\nInvalid name........");
   getch();
   deallocate();
 }
     }
   g_tot=(r_per[room-1]*r_charge[room-1])-advance[room-1]+tot[room-1];
   printf("\n\nYour total amount  is %d",g_tot);
   printf("\n\n\nThanks for the purchase.");
 }
void cancel()
 {
   clrscr();
   screenheader();
   printf("\nEnter the Flat number:");
   scanf("%d",&room);
   if(r_cust[room-1]=="N.A")
     {
       printf("\nThe flat is empty........");
       getch();
     }
   else
     {
       printf("\nEnter the name of the person purchasing flat:");
       fflush(stdin);
       gets(name);
       if(strcmpi(name,r_cust[room-1])==0)
 {
   printf("\nBooking for flat number %d is cancelled......",room);
   strcpy(r_cust[room-1],"N.A");
   getch();
 }
       else
 {
   printf("\nInvalid name........");
   getch();
   cancel();
 }
     }
   g_tot=advance[room-1];
   printf("\n\nYour total amount is %d",g_tot);
 }
void putcust()
 {
   int j;
   clrscr();
   screenheader();
   printf("\nEnter the flat number :");
   scanf("%d",&room);
   j=strcmp(r_cust[room-1],"N.A");
   if(j==0)
     {
       printf("\n Data not available ");
       getch();
     }
   else
     {
       printf("\n Flat No        :%d",r_no[room-1]);
       printf("\n Customer Name  :");
       cputs(r_cust[room-1]);
       printf("\n Period         :%d",r_per[room-1]);
       printf("\n City           :");
       cputs(c_city[room-1]);
       printf("\n Nationality    :");
       cputs(c_nat[room-1]);
       printf("\n No of Rooms   :%d",c_mem[room-1]);
       printf("\n Arrival Date   :%d/%d/%d",day[room-1],month[room-1],year[room-1]);
       getch();
     }
 }
void main()
 {
   char ans;
   int ch;
   clrscr();
   screenheader();
   intro();
   do
     {
       clrscr();
       screenheader();
       printf("\n\n\n                      Choose a category:\n");
       printf("                    1. Get availability\n");
       printf("                    2. Features of Flats\n");
       printf("                    3. Flat allocation\n");
       printf("                    4. Show customer details\n");
       printf("                    5. Cancellation\n");
       printf("                    6. Flat Deallocation\n");
       printf("                    7. Exit\n");
       scanf("%d",&ch);
       switch(ch)
  {
    case 1:getavail();
    putavail();
    break;
    case 2:features();
    break;
    case 3:allocate();
    break;
    case 4:putcust();
    break;
    case 5:cancel();
    break;
    case 6:deallocate();
    break;
    case 7:exit(0);
    default:printf("\n\n\nWrong choice!!!!\n\nPlease choose 1-7");
     getch();
  }
 printf("\n\nDo you want to continue:");
 fflush(stdin);
 scanf("%c",&ans);
     }while(ans=='y'||ans=='Y');
 }
