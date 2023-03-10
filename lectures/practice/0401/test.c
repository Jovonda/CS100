#include <stdio.h>
#include <stdlib.h>

#include "poly.h"
int main(int argc, char const *argv[]) {

        printf("size =%d\n", (int)sizeof(Term));
        Term *head=NULL;

        while(1)
        {
                double c;
                int d;
                // printf("Enter coefficient and degree or CTRL-D to exit: ");
                printf("Enter coefficient and degree or 0 and 0 to exit: ");
                scanf("%lf%d",&c,&d);
                // if(feof(stdin))
                //         break;
                if(c == 0 && d== 0)
                        break;
                //head=addFront(head, c, d);
                head=addRear(head, c, d);
                printPoly(head);
        }
        // head = createTerm(17.3, 1, head);
        // head = createTerm(2.5, 2, head);
        // head = createTerm(5.5, 4,  head);

        printPoly(head);
        printf("There are %d terms\n", countTerms(head));

        int degree = 3;
        Term *pExists = searchTerm (head, degree);
        if(pExists == NULL)
                printf("There is no term with degree = %d\n", degree);
        else
                printf("There is a term with degree= %d and its coefficient= %g\n", degree, pExists->coef);

        degree = 2;
        pExists = searchTerm (head, degree);
        if(pExists == NULL)
                printf("There is no term with degree = %d\n", degree);
        else
                printf("There is a term with degree= %d and its coefficient= %g\n", degree, pExists->coef);


        return 0;
}
