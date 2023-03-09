#include <stdio.h>

int main() {
        int h, m, s;
        printf("Enter the current time\n", );
        scanf("%d%d%d");
        int seconds = 24*3600 - (h*3600+m*60+s);
        int h2, m2, s2;
        h2 = seconds/3600;
        m2 = (seconds%3600)/60;
        s2 = (seconds%3600)%60;
        return 0;
}
