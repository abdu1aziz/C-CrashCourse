#include <stdio.h>
#include <stdlib.h>


/*
 *  Profit Calculator
 *
 *
 *
 *
 *
 */
int main() {

    int daysWorked;
    float priceOfProduct;
    int NumberOfSales;
    float total;

    daysWorked     = 14;
    priceOfProduct = 89.99;
    NumberOfSales  = 28;
    total          = ((float)priceOfProduct * (float)NumberOfSales) / (float)daysWorked;


    printf("Your Average Sales of Each Day: $%.2f USD", total);


    return 0;
    }
