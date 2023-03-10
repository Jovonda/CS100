#include <stdio.h>
#include <stdlib.h>

#include "poly.h"

int main(void)
{
        printf("size=%d\n", (int)sizeof(Term));
        Term *head=NULL;

        while (1) {
                double c;
                int d;
                //printf("Enter coefficient and degree or ctrl-d to end: ");
                printf("Enter coefficient and degree or 0 and 0 to end: ");
                scanf("%lf%d", &c, &d);
                //if (feof(stdin)) break;
                if (c==0.0 && d==0) break;
                //head=addFront(head, c, d);
                //head=addRear(head, c, d);
                head=addOrdered(head, c, d);
                printPoly(head);
        }

        printPoly(head);
        printf("There are %d terms\n", countTerms(head));

        int degree=3;
        Term *pExisting=searchTerm(head, degree);
        if (pExisting==NULL)
                printf("There is no term with degree=%d\n", degree);
        else
                printf("There is a term with degree=%d and its coefficient=%g\n", degree, pExisting->coef);

        degree=2;
        pExisting=searchTerm(head, degree);
        if (pExisting==NULL)
                printf("There is no term with degree=%d\n", degree);
        else
                printf("There is a term with degree=%d and its coefficient=%g\n", degree, pExisting->coef);

        freeList(head);

        return 0;
}
