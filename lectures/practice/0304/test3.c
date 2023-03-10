#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// This returns a pointer to the first and last
char *combineNames(char first[], char last[])
{
        //This is not requried, but get in habit of casting. Example the (char*)
        char *full = (char *)malloc(strlen(first) + strlen(last)+2);
        //Copies first name to full
        strcpy(full, first);
        //This adds space to the end of the full
        strcat(full, " ");
        //This adds the last name to full
        strcat(full, last);
// sprintf(full, "%s %s", first, last);

        return full;
}
int main(void) {
        char first[21];
        char last[21];
        printf("Enter first name: ");
        scanf("%s", first);
        printf("Enter last name: ");
        scanf("%s", last);
        //This is now a pointer, an adress to fullname.
        // This is a pointer to the first character and so on
        char *fullName;
        fullName = combineNames(first, last);
        printf("The full name is '%s' with a length of %d\n",
               fullName, (int)strlen(fullName) );
        //It is good practice to free space that is used.
        free(fullName);
        return 0;
}
