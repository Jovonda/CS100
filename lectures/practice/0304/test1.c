#include <stdio.h>
#include <string.h>
// This gets the first  and last name and returns the full name
void combineNames(char first[], char last[], char full[])
{
        //Copies first name to full
        strcpy(full, first);
        //This adds space to the end of the full
        strcat(full, " ");
        //This adds the last name to full
        strcat(full, last);
// sprintf(full, "%s %s", first, last);
}
int main(void) {
        char first[21];
        char last[21];
        printf("Enter first name: ");
        scanf("%s", first);
        printf("Enter last name: ");
        scanf("%s", last);
        // This is the combination of first and last name numbers of 21 + 21 = 42
        char fullName[42];
        combineNames(first, last, fullName);
        printf("The full name is '%s' with a length of %d\n",
               fullName, (int)strlen(fullName) );
        return 0;
}
