#include <stdio.h>
int main(void) {
        FILE *fp;
        fp = fopen("foobar", "w");
        fprintf(fp, "Roll Tide\n");
        fclose(fp);
        return 0;
        // sscanf gets a string and saves it
        // sprintf gets a string and prints it
}
