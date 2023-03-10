/*
   Made by Jovonda Robinson 2/6/19
   In this project, I used my knowledge of (assignment, selection, printf and scanf)
   to implement a simplified version of 2018 Alabama income tax computation.
 */
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

        int choice, dependents, income,item_deduction,fed_deduction,stan_deduction;
        int p_exempt, d_exempt,t_income, tax, overall_deduction;
        //This while loop will continue until break
        while(1)
        {
                //These are the choices that user can put.
                printf("Enter 1-4 for filing status\n");
                printf("1.Single\n");
                printf("2.Married filling jointly\n");
                printf("3.Married filling separately\n");
                printf("4.Head of family\n");
                printf("What is your choice?\n");
                scanf("%d", &choice);
                //If the choice is not 1 - 4 give response and break out of loop
                if(choice >5|| choice <= 0)
                {
                        printf("Filing status must be 1-4\n");
                        break;

                }
                //If dependents, income, itemized_deduction, federal_deduction is negative
                // reset it to 0
                if(dependents < 0)
                        dependents = 0;
                if(income < 0)
                        income = 0;
                if(item_deduction < 0)
                        item_deduction = 0;
                if(fed_deduction < 0)
                        fed_deduction = 0;
                //This huge if statment applies to choices 1,2, and 4
                if(choice == 1 || choice == 2 || choice == 4)
                {
                        // gets dependets, income, itemized deduction, and federal tax deduction
                        // from user
                        printf("Enter number of dependents:\n");
                        scanf("%i",&dependents);
                        printf("Enter adjusted gross income:\n");
                        scanf("%i",&income);
                        printf("Enter itemized deduction:\n");
                        scanf("%i",&item_deduction);
                        printf("Enter federal tax deduction:\n");
                        scanf("%i",&fed_deduction);
                        //if income is negative, reset it to 0
                        if(income < 0)
                        {
                                income = 0;
                        }
                        //For the incomes that are not negative
                        //if certain choices match up set the standard deduction under that choice
                        if(income >= 0 && income <= 20499)
                        {
                                if(choice == 1)
                                        stan_deduction = 2500;
                                if(choice == 2)
                                        stan_deduction = 7500;
                                if(choice == 4)
                                        stan_deduction = 4700;

                        }
                        else if(income >= 20500 && income <= 20999)
                        {
                                if(choice == 1)
                                        stan_deduction = 2475;
                                if(choice == 2)
                                        stan_deduction = 7325;
                                if(choice == 4)
                                        stan_deduction = 4565;
                        }
                        else if(income >= 21000 && income <= 21499)
                        {
                                if(choice == 1)
                                        stan_deduction = 2450;
                                if(choice == 2)
                                        stan_deduction = 7150;
                                if(choice == 4)
                                        stan_deduction = 4430;
                        }
                        else if(income >= 21500 && income <= 21999)
                        {
                                if(choice == 1)
                                        stan_deduction = 2425;
                                if(choice == 2)
                                        stan_deduction = 6975;
                                if(choice == 4)
                                        stan_deduction = 4295;
                        }
                        else if(income >= 22000 && income <= 22499)
                        {
                                if(choice == 1)
                                        stan_deduction = 2400;
                                if(choice == 2)
                                        stan_deduction = 6800;
                                if(choice == 4)
                                        stan_deduction = 4160;
                        }
                        else if(income >= 22500 && income <= 22999)
                        {
                                if(choice == 1)
                                        stan_deduction = 2375;
                                if(choice == 2)
                                        stan_deduction = 6625;
                                if(choice == 4)
                                        stan_deduction = 4025;
                        }
                        else if(income >= 23000 && income <= 23499)
                        {
                                if(choice == 1)
                                        stan_deduction = 2350;
                                if(choice == 2)
                                        stan_deduction = 6450;
                                if(choice == 4)
                                        stan_deduction = 3890;
                        }
                        else if(income >= 23500 && income <= 23999)
                        {
                                if(choice == 1)
                                        stan_deduction = 2325;
                                if(choice == 2)
                                        stan_deduction = 6275;
                                if(choice == 4)
                                        stan_deduction = 3755;
                        }
                        else if(income >= 24000 && income <= 24499)
                        {
                                if(choice == 1)
                                        stan_deduction = 2300;
                                if(choice == 2)
                                        stan_deduction = 6100;
                                if(choice == 4)
                                        stan_deduction = 3620;
                        }
                        else if(income >= 24500 && income <= 24999)
                        {
                                if(choice == 1)
                                        stan_deduction = 2275;
                                if(choice == 2)
                                        stan_deduction = 5925;
                                if(choice == 4)
                                        stan_deduction = 3485;
                        }
                        else if(income >= 25000 && income <= 25499)
                        {
                                if(choice == 1)
                                        stan_deduction = 2250;
                                if(choice == 2)
                                        stan_deduction = 5750;
                                if(choice == 4)
                                        stan_deduction = 3350;
                        }
                        else if(income >= 25500 && income <= 25999)
                        {
                                if(choice == 1)
                                        stan_deduction = 2225;
                                if(choice == 2)
                                        stan_deduction = 5575;
                                if(choice == 4)
                                        stan_deduction = 3215;
                        }
                        else if(income >= 26000 && income <= 26499)
                        {
                                if(choice == 1)
                                        stan_deduction = 2200;
                                if(choice == 2)
                                        stan_deduction = 5400;
                                if(choice == 4)
                                        stan_deduction = 3080;
                        }
                        else if(income >= 26500 && income <= 26999)
                        {
                                if(choice == 1)
                                        stan_deduction = 2175;
                                if(choice == 2)
                                        stan_deduction = 5225;
                                if(choice == 4)
                                        stan_deduction = 2945;
                        }
                        else if(income >= 27000 && income <= 27499)
                        {
                                if(choice == 1)
                                        stan_deduction = 2150;
                                if(choice == 2)
                                        stan_deduction = 5050;
                                if(choice == 4)
                                        stan_deduction = 2810;
                        }
                        else if(income >= 27500 && income <= 27999)
                        {
                                if(choice == 1)
                                        stan_deduction = 2125;
                                if(choice == 2)
                                        stan_deduction = 4875;
                                if(choice == 4)
                                        stan_deduction = 2675;
                        }
                        else if(income >= 28000 && income <= 28499)
                        {
                                if(choice == 1)
                                        stan_deduction = 2100;
                                if(choice == 2)
                                        stan_deduction = 4700;
                                if(choice == 4)
                                        stan_deduction = 2540;
                        }
                        else if(income >= 28500 && income <= 28999)
                        {
                                if(choice == 1)
                                        stan_deduction = 2075;
                                if(choice == 2)
                                        stan_deduction = 4525;
                                if(choice == 4)
                                        stan_deduction = 2405;
                        }
                        else if(income >= 29000 && income <= 29499)
                        {
                                if(choice == 1)
                                        stan_deduction = 2050;
                                if(choice == 2)
                                        stan_deduction = 4350;
                                if(choice == 4)
                                        stan_deduction = 2270;
                        }
                        else if(income >= 29500 && income <= 29999)
                        {
                                if(choice == 1)
                                        stan_deduction = 2025;
                                if(choice == 2)
                                        stan_deduction = 4175;
                                if(choice == 4)
                                        stan_deduction = 2135;
                        }
                        else if(income >= 30000)
                        {
                                if(choice == 1)
                                        stan_deduction = 2000;
                                if(choice == 2)
                                        stan_deduction = 4000;
                                if(choice == 4)
                                        stan_deduction = 2000;
                        }
                        // if the itemized deduction is greater than the standard deduction
                        // set the overall_deduction to itemized deduction
                        // else set it to standard deduction
                        if(item_deduction > stan_deduction)
                                overall_deduction = item_deduction;
                        else
                                overall_deduction = stan_deduction;

                        // if income is in certain range set the dependent exemption to it
                        if(income >=0 && income <= 20000)
                                d_exempt = 1000;
                        else if(income >= 20001 && income <= 100000)
                                d_exempt = 500;
                        else if(income > 100000)
                                d_exempt = 300;
                        // if choice matches up set the personal exemption to it
                        if(choice == 1)
                                p_exempt = 1500;

                        if(choice == 2 || choice == 4)
                                p_exempt = 3000;
                        // set deduction exemption to dependent exemption times # of dependents
                        d_exempt = d_exempt * dependents;
                        // taxable income is equalled to income - overall_deduction -
                        //deduction exemption - federal deduction - personal exemption
                        t_income = income - overall_deduction- d_exempt - fed_deduction- p_exempt;
                        // if income is negative set it to 0
                        if(t_income < 0)
                                t_income = 0;
                        // if taxable income is greater than 3000
                        // set tax to equal 500 * %2 + 2500 * %4 + remainder of taxable
                        // income - 3000 * %5
                        if(t_income < 500)
                        {
                                tax = (int) round(t_income * 0.02);
                        }
                        if(t_income > 500 && t_income < 2500)
                        {
                                tax = (int) round(500 * 0.02 + (t_income - 500) * 0.04);
                        }
                        if(t_income > 2500 && t_income < 3000)
                        {
                                tax = (int) round(500 * 0.02 + 2500 * 0.04 + (t_income - 2500) * 0.04);
                        }
                        if(t_income > 3000)
                        {
                                tax = (int)round(500 *0.02 + 2500 * 0.04 + (t_income -3000) *0.05);
                        }
                        // if choice is 2
                        //  and if taxable income is greater than 6000
                        // set tax to equal 1000 * %2 + 5000 * %4 + remainder of taxable
                        // income - 6000 * %5
                        if (choice == 2)
                        {
                                if(t_income < 1000)
                                {
                                        tax = (int) round(t_income * 0.02);
                                }
                                if(t_income > 1000 && t_income < 5000)
                                {
                                        tax = (int) round(1000 * 0.02 + (t_income - 1000) * 0.04);
                                }
                                if(t_income > 5000 && t_income < 6000)
                                {
                                        tax = (int) round(1000 * 0.02 + 5000 * 0.04 + (t_income - 5000) * 0.04);
                                }
                                if(t_income > 6000)
                                {
                                        tax = (int)round(1000 *0.02 + 5000 * 0.04 + (t_income-6000) *0.05);
                                }

                        }
                        // print out the standard deduction, personal exemption,
                        // dependent exemption, taxable income, and tax.
                        // break out of loop
                        printf("standard deduction=%d\n",stan_deduction);
                        printf("Personal exemption=%d\n", p_exempt);
                        printf("Dependent exemption=%d\n", d_exempt);
                        printf("Taxable=%d\n", t_income);
                        printf("Tax is %d\n",tax);

                        break;
                }
                // This huge if statemet occurs if choice is equal to three
                if(choice == 3)
                {
                        // gets dependets, income, itemized deduction, and federal tax deduction
                        // from user
                        printf("Enter number of dependents:\n");
                        scanf("%i",&dependents);
                        printf("Enter adjusted gross income:\n");
                        scanf("%i",&income);
                        printf("Enter itemized deduction:\n");
                        scanf("%i",&item_deduction);
                        printf("Enter federal tax deduction:\n");
                        scanf("%i",&fed_deduction);
                        //if income is negative set it to 0
                        if(income < 0)
                                income = 0;
                        // if income is in range set standard deduction to value
                        if(income >= 0 && income <= 10249)
                                stan_deduction = 3750;

                        else if(income >= 10250 && income <= 10499)
                                stan_deduction = 3662;

                        else if(income >= 10500 && income <= 10749)
                                stan_deduction = 3574;

                        else if(income >= 10750 && income <= 10999)
                                stan_deduction = 3486;

                        else if(income >= 11000 && income <= 11249)
                                stan_deduction = 3398;

                        else if(income >= 11250 && income <= 11499)
                                stan_deduction = 3310;

                        else if(income >= 11500 && income <= 11749)
                                stan_deduction = 3222;

                        else if(income >= 11750 && income <= 11999)
                                stan_deduction = 3134;

                        else if(income >= 12000 && income <= 12249)
                                stan_deduction = 3046;

                        else if(income >= 12250 && income <= 12499)
                                stan_deduction = 2958;

                        else if(income >= 12500 && income <= 12749)
                                stan_deduction = 2870;

                        else if(income >= 12750 && income <= 12999)
                                stan_deduction = 2782;

                        else if(income >= 13000 && income <= 13249)
                                stan_deduction = 2694;

                        else if(income >= 13250 && income <= 13499)
                                stan_deduction = 2606;

                        else if(income >= 13500 && income <= 13749)
                                stan_deduction = 2518;

                        else if(income >= 13750 && income <= 13999)
                                stan_deduction = 2430;

                        else if(income >= 14000 && income <= 14249)
                                stan_deduction = 2342;

                        else if(income >= 14250 && income <= 14499)
                                stan_deduction = 2254;

                        else if(income >= 14500 && income <= 14749)
                                stan_deduction = 2166;

                        else if(income >= 14750 && income <= 14999)
                                stan_deduction = 2078;

                        else if(income >= 15000)
                                stan_deduction = 2000;
                        // if itemized deduction is greater than standard fed_deduction
                        // set the overall deduction to itemized deduction
                        // else set it to the standard deduction
                        if(item_deduction > stan_deduction)
                                overall_deduction = item_deduction;
                        else
                                overall_deduction = stan_deduction;
                        //if income is in range set the dependent exemption to that value
                        if(income >=0 && income =< 20000)
                                d_exempt = 1000;
                        else if(income >= 20001 && income <= 100000)
                                d_exempt = 500;
                        else if(income > 100000)
                                d_exempt = 300;
                        // personal exemption for choice 3 is 1500
                        p_exempt = 1500;
                        //set dependent exemption to dependent exemption times number of dependents
                        d_exempt = d_exempt * dependents;
                        // taxable income tax equals  income - overall_deduction -
                        // dependent exemption - federal tax deduction - Personal exemption
                        t_income = income - overall_deduction - d_exempt - fed_deduction - p_exempt;
                        // if income is negative set income to 0
                        if(t_income < 0)
                                t_income = 0;
                        // if income is greater than 3000 set tax to
                        // 500 * %2 + 2500 * %4 + remainder of income- 3000 *  %5
                        if(t_income < 500)
                        {
                                tax = (int) round(t_income * 0.02);
                        }
                        if(t_income > 500 && t_income < 2500)
                        {
                                tax = (int) round(500 * 0.02 + (t_income - 500) * 0.04);
                        }
                        if(t_income > 2500 && t_income < 3000)
                        {
                                tax = (int) round(500 * 0.02 + 2500 * 0.04 + (t_income - 2500) * 0.04);
                        }
                        if(t_income > 3000)
                        {
                                tax = (int)round(500 *0.02 + 2500 * 0.04 + (t_income -3000) *0.05);
                        }
                        // Print out the standard deduction, personal exemption, dependent exemption,
                        // taxable income, and the tax
                        // break out of loop
                        printf("standard deduction=%d\n",stan_deduction);
                        printf("Personal exemption=%d\n", p_exempt);
                        printf("Dependent exemption=%d\n", d_exempt);
                        printf("Taxable=%d\n", t_income);
                        printf("Tax is %d\n",tax);
                        break;
                }
        }
        return 0;
}
