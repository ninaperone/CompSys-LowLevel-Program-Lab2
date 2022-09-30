//  revenue.c
//  Nina Perone, 9/3/22, CIS2107 sec 002, tul44843
//  Lab 2 "Revenue": write a C program to calculate the revenue from a sale based on the unit price and quantity of a product input by the user

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void ) {
    printf("Welcome to \"Temple\" store\n");
    printf("\n");
        
    // scan variables and make sure valid
    double itemPrice;
    double quantity;
    double intPart;
    double discount;
    
    printf("\tEnter item price: ");
    scanf("%lf", &itemPrice);
    if(itemPrice <= 0 || modf(itemPrice ,  &intPart) > 0) {
        printf("\n\tThis is not a valid item price. \n\tPlease run the program again\n");
        printf("\nThank you for using \"Temple\" store");
        exit(1);
    }
    printf("\tEnter quantity: ");
    scanf("%lf", &quantity);
    if(quantity <= 0 || modf(quantity ,  &intPart) > 0) {
        printf("\n\tThis is not a valid quantity order. \n\tPlease run the program again\n");
        printf("\nThank you for using \"Temple\" store");
        exit(1);
    }
    printf("\n");
    
    // find discount
    if(quantity < 50) {
        discount = 0;
    }
    else if(quantity < 100) {
        discount = 10;
    }
    else if(quantity < 150) {
        discount = 15;
    }
    else{
        discount = 25;
    }
    
    
    // print discount
    
    double cost = itemPrice*quantity;
    double discountCost = cost*(discount/100);
    double total = cost-discountCost;
    
    printf("\tThe item price is: $%.1lf\n", itemPrice);
    printf("\tThe order is: %d item(s)\n", (int)quantity);
    printf("\tThe cost is: $%.1lf\n", cost);
    printf("\tThe discount is: %.1lf%%\n", discount);
    printf("\tThe discount amount is: $%.1lf\n", discountCost);
    printf("\tThe total is: $%.1lf\n", total);
    
    // closing
    printf("\nThank You for using \"Temple\" store\n");
    exit(1);
    
    
}
