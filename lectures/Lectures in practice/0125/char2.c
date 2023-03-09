#include <stdio.h>

int main(void) {
        char a, b, c;
        printf("Enter something: ");
        scanf("%c%c%c", &a, &b, &c);
        printf("1. %c-%c-%c\n", a, b, c);
        printf("2. %d-%d-%d\n", a, b, c);
        return 0;
}
