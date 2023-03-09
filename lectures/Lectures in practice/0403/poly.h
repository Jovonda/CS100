//Do not need headers in files of h
// Make this as ugly as possible so no one will use it
#ifndef _POLY_H_
#define _POLY_H_
typedef struct _term
{
        double coef;
        int degree;
        struct _term *next;
}Term;
Term *createTerm (double c, int d, Term *next);
void printPoly(Term *head);
int countTerms(Term *head);
Term *searchTerm (Term *head, int degree);
Term *addFront(Term *head, double c, int d);
Term *addRear(Term *head, double c, int d);
Term *addOrdered(Term *head, double c, int d);
#endif
