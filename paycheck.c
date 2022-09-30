//  paycheck.c
//  Nina Perone, 9/3/22, CIS2107 sec 002, tul44843
//  Lab 2 "Paycheck": Write a C program to calculate the paycheck for a Temple employee based on the hourlySalary, weeklyTime (working for max 40 hours) and overtime (working for more than 40 hours)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void ) {
    printf("Welcome to \"TEMPLE HUMAN RESOURCES\"\n");
    printf("\n");
        
    // scan variables and make sure valid
    double employeeNum;
    double hourlySal;
    double weeklyTime;
    double intPart;
    
    printf("\tEnter Employee Number: ");
    scanf("%lf", &employeeNum);
    if(employeeNum <= 0 || modf(employeeNum ,  &intPart) > 0) {
        printf("\n\tThis is not a valid Employee Number. \n\tPlease run the program again\n");
        printf("\nThank you for using \"TEMPLE HUMAN RESOURCES\"");
        exit(1);
    }
    printf("\tEnter Hourly Salary: ");
    scanf("%lf", &hourlySal);
    if(hourlySal <= 0 || modf(hourlySal ,  &intPart) > 0) {
        printf("\n\tThis is not a valid hourly salary amount. \n\tPlease run the program again\n");
        printf("\nThank you for using \"TEMPLE HUMAN RESOURCES\"\n");
        exit(1);
    }
    printf("\tEnter Weekly Time: ");
    scanf("%lf", &weeklyTime);
    if(weeklyTime <= 0 || modf(weeklyTime ,  &intPart) > 0) {
        printf("\n\tThis is not a valid weekly time. \n\tPlease run the program again\n");
        printf("\nThank you for using \"TEMPLE HUMAN RESOURCES\"");
        exit(1);
    }
        
    // reprinting variables
    printf("\t==============================\n");
    printf("\tEmployee #: %d\n", (int)employeeNum);
    printf("\tHourly Salary: $%.1lf\n", hourlySal);
    printf("\tWeekly Time: %.1lf\n", weeklyTime);
    
    // print reg + overtime + netpay
    double regPay;
    if(weeklyTime<=40) {
        regPay = hourlySal*weeklyTime;
        printf("\tRegular Pay: $%.1lf\n", regPay);
        printf("\tNet Pay: $%.1lf\n", regPay);
    }
    else {
        regPay = hourlySal*40;
        double overPay = hourlySal*(weeklyTime-40)*1.5;
        printf("\tRegular Pay: $%.1lf\n", regPay);
        printf("\tOvertime Pay: $%.1lf\n", overPay);
        printf("\tNet Pay: $%.1lf\n", regPay + overPay);
    }
    
    // print out message
    printf("\t==============================\n");
    printf("Thank you for using \"TEMPLE HUMAN RESOURCES\"");
    exit(1);
    
    
}
