#include<stdio.h>

int main()
{
    // Decision Making

    // if - else:
    /*
    if

    if
    else if
    else if
    else if

    if
    else

    if
    else if
    else if
    else
    */

    /*
    if
    

    if


    if
    */
    /*
    int n;
    printf("n: ");
    scanf("%d", &n);
    if(n > 0){
        printf("Positive.");
    }
    // if(n == 0){
    else if(n == 0){
        printf("Zero.");
    }
    // if(n < 0){
    else{
        printf("Negative.");
    }
    return 0;
    */
    /*
    PAR: 7
    Strokes     Score
    7           PAR
    5 or 6      BIRDY
    2 to 4      EAGLE
    1           HOLE IN ONE

    8 or 9      BOGEY
    10          DOUBLE BOGEY
    > 10        GO HOME
    */
//    if (a <= b && b <= c)

    int n = 2100;
    if (n % 100 == 0){
        // task 1: is it divisible by 400?
        if(n % 400 == 0){
            printf("Leap Year.");
        }
        else{
            printf("Not Leap Year.");
        }
    }
    else{
        // task 2: is it divisible by 4?
        if (n % 4 == 0){
            printf("Leap Year.");
        }
        else{
            printf("Not Leap Year.");
        }
    }
}

/*
1. Golf program
2. Leap year
3. Find the quadrant: Ask two coordinates x & y from user & print in which quadrant that point falls.
4. 
Write a program in C to calculate and print the Electricity bill of a given customer. 
The unit consumed by the user should be taken from the keyboard and display the total amount to be paid by the customer. 
The charges are as follow :

Units                               Charge/unit
upto 199	                        @1.20
200 and above but less than 400	    @1.50
400 and above but less than 600	    @1.80
600 and above	                    @2.00

If bill exceeds Rs. 400 then a surcharge of 15% will be charged.
The minimum bill should be of Rs. 100/-

Test Data :
800

Expected Output :
unit Consumed :800
Amount Charges @Rs. 2.00 per unit : Amount X
Surchage Amount : Amount Y
Net Amount Paid By the Customer : Amount Z
*/