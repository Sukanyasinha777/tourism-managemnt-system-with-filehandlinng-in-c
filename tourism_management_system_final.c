#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void agra();
void goa();
void amritsar();
void shimla();
void ooty();
void alleppy();
void jaipur();
void ladakh();
void mysore();
void darjeeling();

void menu();
void print_bill();
void modify();
void flights();
void hotel();
void details();

struct info{
	char name[20];
	int age[10];
	char gender[10];
	int cost;
	char destination[20];
	int id;
	int d,m,y;
	int days;
	char flight[20];
	float amount;
	char hotel[20];
	int ahotel;
}a;

void menu()
{
	int choice;
	printf("\n*****CHOOSE FROM MENU*****");
	printf("\n1.AGRA");
	printf("\n2.GOA");
	printf("\n3.AMRITSAR");
	printf("\n4.SHIMLA");
	printf("\n5.OOTY");
	printf("\n6.ALLEPPY");
	printf("\n7.JAIPUR");
	printf("\n8.LADAKH");
	printf("\n9.MYSORE");
	printf("\n10.DARJEELING");
	printf("\n11.EXIT");
	printf("\nenter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			 agra();
			break;
		case 2:
			 goa();
			break;
		case 3:
			 amritsar();
			break;
		case 4:
			shimla();
			break;
		case 5:
			ooty();
			break;
		case 6:
			alleppy();
			break;
		case 7:
			jaipur();
			break;
		case 8:
			ladakh();
			break;
		case 9:
			mysore();
			break;
		case 10:
			darjeeling();
			break;
		case 11:
			exit(1);
		default:
			printf("\nwrong choice");
	}
}
void main()
{
	int choice,flag=1;
	while(flag)
	{
	printf("\n\tWELCOM TO SINHA'S TOURISM MANAGEMENT SYSTEM...");
	printf("\n1.CHOOSE DESTINATION...");
	printf("\n2.GENERATE BILL....");
	printf("\n3.MODIFY ON DETAILS...");
	printf("\n4.EXIT");
	printf("\nenter your choice....");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			menu();
			break;
		case 2:
			print_bill();
			break;
		case 3:
			modify();
			break;
		case 4:
			flag=0;
			break;
		default:
			printf("\nwrong choice...");
	}
}
}
void agra()
{
strcpy(a.destination, "AGRA");
printf("\n WELCOME ");
printf("\nFLIGHTS AVAILABLE");
flights();
hotel();
details();	
}
void goa()
{
strcpy(a.destination, "GOA");
printf("\n WELCOME ");
printf("\nFLIGHTS AVAILABLE");
flights();
hotel();
details();	
}
void amritsar()
{
strcpy(a.destination, "AMRITSAR");
printf("\n WELCOME ");
printf("\nFLIGHTS AVAILABLE");
flights();
hotel();
details();
}
void shimla()
{
strcpy(a.destination, "SHIMLA");
printf("\n WELCOME ");
printf("\nFLIGHTS AVAILABLE");
flights();
hotel();
details();	
}
void ooty()
{
strcpy(a.destination, "OOTY");
printf("\n WELCOME ");
printf("\nFLIGHTS AVAILABLE");
flights();
hotel();
details();
}
void alleppy()
{
strcpy(a.destination, "ALLEPPY");
printf("\n WELCOME ");
printf("\nFLIGHTS AVAILABLE");
flights();
hotel();
details();
}
void jaipur()
{
strcpy(a.destination, "JAIPUR");
printf("\n WELCOME ");
printf("\nFLIGHTS AVAILABLE");
flights();
hotel();
details();
}
void ladakh()
{
strcpy(a.destination, "LADAKH");
printf("\n WELCOME ");
printf("\nFLIGHTS AVAILABLE");
flights();
hotel();
details();
}
void mysore()
{
strcpy(a.destination, "MYSORE");
printf("\n WELCOME ");
printf("\nFLIGHTS AVAILABLE");
flights();
hotel();
details();
}
void darjeeling()
{
strcpy(a.destination, "DARJEELING");
printf("\n WELCOME ");
printf("\nFLIGHTS AVAILABLE");
flights();
hotel();
details();
}
void flights()
{
	int choice;
	printf("\n1.AIR INDIA RS.5000/HEAD");
	printf("\n2.INDIGO RS.7000/HEAD");
	printf("\n3.JETLITE RS.4500/HEAD");
	printf("\n4.VISTARA AIRLINES RS.3400/HEAD");
	printf("\n5.AIRASIA INDIA RS.5700/HEAD");
	printf("\nenter your choice....");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		 a.amount+=5000;
strcpy(a.flight,"AIR_INDIA");
break;
case 2:
 a.amount+=7000;
strcpy(a.flight,"INDIGO");
break;
case 3:
 a.amount+=4500;
strcpy(a.flight,"JETLITE");
break;
case 4:
 a.amount+=3400;
strcpy(a.flight,"VISTARA_AIRLINES");
break;
case 5:
a.amount+=5700;
strcpy(a.flight,"AIRASIA_INDIA");
break; 
}
}
void details()
{
	int i,number;
	printf("\n enter no. of person:");
	scanf("\n%d",&number);
	for(i=1;i<=number;i++)
	{
		printf("\nenter %d detail:",number);
		printf("\n chooose id for two digit:");
		scanf("%d",&a.id);
		printf("\n enter name...age...gender(male/female)\n");
		scanf("%s %d %s",&a.name,&a.age,&a.gender);
	}
	printf("\n enter the no.of days....");
	scanf("\n%d",&a.days);
	printf("\n enter checkin date (in foremate dd-mm-yyyy):");
	scanf("%d %d %d",&a.d,&a.m,&a.y);
	FILE *ptr;
	ptr=fopen("add.txt","w");
	fclose(ptr);
	FILE *abc;
	abc=fopen("add.txt","a+");
	fprintf(abc,"%d %s %d %s %s %d %s %s %d %d %d %f",a.id,a.name,a.age,a.gender,a.destination,a.days,a.flight,a.hotel,a.d,a.m,a.y,a.amount);
	fclose(abc);
	printf("\nYOUR BOOKING IS SUCCESSFULL....");
	print_bill();
}
void print_bill()
{
	FILE *ptr;
	int total;
	a.amount=a.amount+(float)(a.days*a.ahotel);
	ptr=fopen("add.txt","r");
    while (!feof(ptr))
	{
	fscanf(ptr,"%d %s %d %s %s %d %s %s %d %d %d %f",&a.id,&a.name,&a.age,&a.gender,&a.destination,&a.days,&a.flight,&a.hotel,&a.d,&a.m,&a.y,&a.amount); 	
	printf("\nID is %d...",a.id);
	printf("\ndestination is %s\n flight %s...",a.destination,a.flight);
	printf("\nname is %s\nage is %d\ngender is %s",a.name,a.age,a.gender);
	printf("\nhotel is %s\nnumber of days %d\ntotal cost is %f",a.hotel,a.days,a.amount);
	break;
	}
	fclose(ptr);
}
void modify()
{
FILE *ptr;
ptr=fopen("add.txt","r+");
menu();
flights();
hotel();
details();
fclose(ptr);	
}
void hotel()
{
int choice;
printf("\nHOTELS AVAILABLE.....");
printf("\n1.UMAID BHAVAN 1000 perday");
printf("\n2.THE OBEROI 1300 perday");
printf("\n3.THE TAJ PALACE 1250 perday");
printf("\n4.TAJ LAKE PALACE 1500 perday");
printf("\n5.ANANDA 1750 perday");
printf("\nenter your choice...");
scanf("%d",&choice);
switch(choice)
{
case 1:
	a.ahotel=1000;
	strcpy(a.hotel,"UMAID_BHAVAN");
	break;
case 2:
	a.ahotel=1300;
	strcpy(a.hotel,"THE_OBEROI");
	break;
case 3:
	a.ahotel=1250;
	strcpy(a.hotel,"THE_TAJ_PALACE");
	break;
case 4:
	a.ahotel=1500;
	strcpy(a.hotel,"TAJ_LAKE_PALACE");
	break;
case 5:
	a.ahotel=1750;
	strcpy(a.hotel,"AMANDA");
	break;
default:
printf("\nwrong choice..enter again");
hotel();	
}	
}