#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAXRATE 0.07
int main()
{
float price1,price2,price3,price4,price5,total1,total2,total3,total4,total5,subtotal,tax,finaltotal;
int QTY1,QTY2,QTY3,QTY4,QTY5;
char item1[40];
char item2[40];
char item3[40];
char item4[40];
char item5[40];
char firstname[40];
char middleI[40];
char lastname[40];

    printf("Enter your first name\n");
    scanf("%s",firstname);
    printf("Enter your middle initial\n");
    scanf("%s",middleI);
    printf("Enter your last name\n");
    scanf("%s",lastname);
    printf("Enter your first items name\n");
    scanf("%s",item1);
    printf("What is the price of the item\n");
    scanf("%f",&price1);
    printf("How many\n");
    scanf("%d",&QTY1);
    printf("Enter your second items name\n");
    scanf("%s",item2);
    printf("What is the price of the item\n");
    scanf("%f",&price2);
    printf("How many\n");
    scanf("%d",&QTY2);
    printf("Enter your third items name\n");
    scanf("%s",item3);
    printf("What is the price of the item\n");
    scanf("%f",&price3);
    printf("How many\n");
    scanf("%d",&QTY3);
    printf("Enter your fourth items name\n");
    scanf("%s",item4);
    printf("What is the price of the item\n");
    scanf("%f",&price4);
    printf("How many\n");
    scanf("%d",&QTY4);
    printf("Enter your fifth items name\n");
    scanf("%s",item5);
    printf("What is the price of the item\n");
    scanf("%f",&price5);
    printf("How many\n");
    scanf("%d",&QTY5);
    total1=price1*QTY1;
    total2=price2*QTY2;
    total3=price3*QTY3;
    total4=price4*QTY4;
    total5=price5*QTY5;
    subtotal=total1+total2+total3+total4+total5;
    tax=TAXRATE*subtotal;
    finaltotal=tax+subtotal;
    printf("\n");
    printf("\n");
    printf("%s %s %s\n",firstname,middleI,lastname);
    printf("Itemized Receipt\n");
    printf("Description             QTY             Unit Price          Total\n");
    printf("%s %20d %20.2f %18.2f   \n",item1,QTY1,price1,total1);
    printf("%s %20d %20.2f %18.2f   \n",item2,QTY2,price2,total2);
    printf("%s %20d %20.2f %18.2f   \n",item3,QTY3,price3,total3);
    printf("%s %20d %20.2f %18.2f   \n",item4,QTY4,price4,total4);
    printf("%s %20d %20.2f %18.2f   \n",item5,QTY5,price5,total5);
    printf("\n");
    printf("\n");
    printf("                                          SUBTOTAL          %.2f   \n",subtotal);
    printf("                                          TAX               %.2f   \n",tax);
    printf("                                          TOTAL             %.2f   \n",finaltotal);




}
