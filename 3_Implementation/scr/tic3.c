#include "function.h"
#include "moviedetails.c"
#include<string.h>

struct movie_details person[300];
void show3(int choice,char name[10],int id1,int price)
{ 
        int count = 0;
		system("cls");
		printf("\n\n");
        //printf("\t-----------------THEATER RESERVATION TICKET----------------\n");
        printf("\t*********************\n");
        printf("\t Reservation ID : %d \t\t\tShow Name : Tenet \n",id1);
        printf("\t Customer  : %s\n",name);
        printf("\t\t\t                              Date      : 15-07-2020\n");
        printf("\t                                              Time      : 10:00pm\n");
        printf("\t                                              Hall      : 04\n");
        printf("\t                                              seats No. : %d  \n",choice);
        printf("\t                                              price . : %d  \n\n",price);
        person[count].id=id1;
        printf("\tThankYou For Reserving a Ticket\n");
        return;
}