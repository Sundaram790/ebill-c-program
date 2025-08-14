#include<stdio.h>

int main()
{
 char name[50];
 int units;
 int choice;
 float charge, total;

 printf("===Electricity bill generator===\n");
 printf("Enter customer name :\n");
 scanf(" %[^\n]", name);

 printf("Enter units consumed :\n");
 scanf("%d", &units);

 printf("Select connection type :\n");
 printf("1. Domestic\n");
 printf("2. Commercial\n");
 printf("Enter choice (1 or 2) : \n");
 scanf("%d", &choice);

 //Calculate charges
 if(choice == 1) { //domestic
   if(units <= 100)
   charge = 100 * 1.5;
   else if(units <= 300)
   charge = 100 * 1.5 + (units - 100) * 2.0;
   else
   charge = 100 * 1.5 + 200 * 2.0 + (units - 300) * 3.0;

 } else if (choice == 2) { //commercial
    if(units<=100)
    charge = 100 * 2.50;
    else if(units <= 300)
    charge = 100 * 2.50 + (units - 100) * 4.0;
    else
    charge = 100 * 2.50 + 200 * 4.0 + (units - 300) * 5.0;

 } else {
    printf("Invalid connection type.\n");
    return 0;
 }

  //Adding fixed meter charge
  total = charge + 50; //Rs 50 meter charge

  //Printing bill
  printf("\n---Electricity Bill---\n");
  printf("Customer name : %s\n", name);
  printf("Units consumed : %d\n", units);
  printf("Connection type : %s\n", (choice == 1) ? "Domestic" : "Commercial");
  printf("Energy charge : %.2f\n", charge);
  printf("Meter charge : Rs 50.00\n");
  printf("------------------------");
  printf("Total bill    : Rs %.2f\n", total);
  printf("========================");


return 0;
}