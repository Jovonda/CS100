/*
   Made by Jovonda Robinson
   This program prompts the user for a month and a day in Year 2019.
 */
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
        int day, month, datey;
        char monthw[15] = "Jaunary";
        printf("Please enter month and day\n");

        scanf("%d %d", &month, &day);
        datey = day;
        switch(month)
        {
        case 2:
                strcpy(monthw, "Febuary");
                datey += 31;
                break;
        case 3:
                strcpy(monthw, "March");
                datey += 31 + 28;
                break;
        case 4:
                strcpy(monthw, "April");
                datey += 31 + 28 +31;
                break;
        case 5:
                strcpy(monthw, "May");
                datey += 31 + 28 +31 +30;
                break;
        case 6:
                strcpy(monthw, "June");
                datey += 31 + 28 +31 +30 +31;
                break;
        case 7:
                strcpy(monthw, "July");
                datey += 31 + 28 +31 +30 +31 +30;
                break;
        case 8:
                strcpy(monthw, "August");
                datey += 31 + 28 +31 +30 +31 +30+31;
                break;
        case 9:
                strcpy(monthw, "September");
                datey  += 31 + 28 +31 +30 +31 +30+31+31;
                break;
        case 10:
                strcpy(monthw, "October");
                datey += 31 + 28 +31 +30 +31 +30+31+31+30;
                break;
        case 11:
                strcpy(monthw, "November");
                datey += 31 + 28 +31 +30 +31 +30 +31+31+30+31;
                break;
        case 12:
                strcpy(monthw, "December");
                datey += 31 + 28 +31 +30 +31 +30 +31+31+30+31+30;
                break;
                return 0;
        }

        printf("%d %d is %s %d, 2019, day %d of the year\n", month, day, monthw, day, datey );
}
