#include <stdio.h>

int main(int argc, char const *argv[]) {
        int hours;
        int mins;
        int secs;
        int f_hour;
        int f_mins;
        int f_secs;

        printf("Enter the current time.\n");
        scanf("%d", &hours);
        scanf("%d", &mins);
        scanf("%d", &secs);
        //printf("%d %d %d", hours, mins, secs);

        f_hour = 24 - hours;
        f_mins = 0 - mins;
        f_secs = 0 - secs;
        if(f_hour > 12)
        {
                f_hour = f_hour - 1;
                f_mins = f_mins + 60 -1;
                f_secs = f_secs + 60;
        }
        if(f_mins < 0)
        {
                f_hour = f_hour - 1;
                f_mins = (f_mins + 60 ) -1;
                f_secs = f_secs + 60;
        }

        printf("It is %d hours %d minutes %d seconds until New Year.", f_hour, f_mins, f_secs);
        return 0;
}
