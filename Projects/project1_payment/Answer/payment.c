/*
   This program was made by Jovonda Robinson 1/21/19
   The program first asks for the number of quarters, dimes, nickels and
   pennies the owner has paid. It then computes the total amount of tax
   paid in dollars and cents, and computes the weight of all the coins
   in pounds. Next assume the same amount of tax will be paid using
   paper bills in the following denominations: $20 bills, $10 bills, $5 bills,
   and $1 bills. (If the tax amount contains any cents,
   round it to the nearest dollar.) The program will figure out how
   to pay the tax with the minimal number of bills
   (therefore the minimal weight), and compute the weight
   of these bills in both grams and pounds.
 */
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
        int quaters = 0, dimes = 0, nickels = 0, pennies = 0;
        int total = 0, dollars = 0, cents = 0;
        int twenty = 0, ten = 0, five = 0, one = 0;
        double wtotal = 0, btotal = 0;
        double const POUND = 0.00220462;

        printf("Enter number of quaters:\n");
        scanf("%d", &quaters);
        printf("Enter number of dimes:\n");
        scanf("%d", &dimes);
        printf("Enter number of nickels:\n");
        scanf("%d", &nickels);
        printf("Enter number of pennies:\n");
        scanf("%d", &pennies);

        total = (25*quaters) + (10*dimes) + (5*nickels) + pennies;
        dollars = total/100;
        cents = total%100;

        printf("Total payment is %d dollars and %d cents.\n",dollars, cents);
        wtotal = ((5.67*quaters) + (2.268*dimes) + (5.0*nickels) + (2.5*pennies)) * POUND;
        dollars = dollars +  round(cents/100.0);
        twenty = dollars / 20;
        ten = (dollars - (twenty* 20))/10;
        five = (dollars - (twenty* 20) - (ten * 10))/5;
        one = (dollars - (twenty * 20) - (ten *10) - (five * 5));
        btotal = twenty + ten + five + one;


        printf("Total weight of all the coins is %lf pounds.\n", wtotal);
        printf("It is recommended to use the following payment form:\n %d twenty-dollar bills\n %d ten-dollar bills\n %d five-dollar bills\n %d one-dollar bills\n", twenty, ten, five, one);
        printf("It achieves the minimal weight of %d grams or %lf pounds.\n", (int)(round(btotal)), btotal * POUND );
        return 0;
}
