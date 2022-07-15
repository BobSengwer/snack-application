/*
project:    snack bar application
Author:     Bryan Kiprop
Compiler:   C89
License:    MIT
Date:       July 2022
*/
#include<stdio.h>
//relational operators: > < >= <= == !=
//logical operators:&& || !
// control structures
// 1. selection/decision making/conditional - if

int main(){
	int choice = 0;
  int qty = 0;
  int total = 0;

     printf("Welcome to BRYANS SNACK BAR.\n ");
  printf("$  Snack Menu  $ \n\n");
  printf("  && Please select the snack that you would like to purchase. && \n\n");
  printf("\t\t [1] hot dog - sh 150.00\n");
  printf("\t\t [2] milk shake - sh 1000\n");
  printf("\t\t [3] coffee - sh 50\n");
  printf("\t\t [4] beef smokie - sh 40\n");


  printf("Enter your choice here : ");
  scanf("%d", &choice);


    switch (choice)
    {
    case 1:
        printf("HOT DOG JUICE SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 150;
        printf("Total Amount For Pay : %d", total);
        break;

    case 4:
        printf("MILK SHAKE, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 100;
        printf("Total Amount For Pay : %d", total);
        break;
    case 5:
        printf("COFFEE SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 50;
        printf("Total Amount For Pay : %d", total);
        break;
    case 6:
        printf("BEEF SMOKIE SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 40;
        printf("Total Amount For Pay : %d", total);
        break;

    default:
        printf("We are Sorry, for this....");
        break;
    }
    return 0;
     printf("Thank You Very Much\n ");
  printf("&& welcome back. && \n\n");
}

