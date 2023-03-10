#include <stdio.h>
#include <stdlib.h>
// this means that it is home made mine is "" the system is <>
#include "poly.h"
//This returns a pointer to the node of type letter
Term *createTerm (double c, int d, Term *next)
{
        //This is for many variables
        Term *ptr = malloc(sizeof(Term));

        //with -> or . is attribute, with out is parapmeter
        ptr->coef = c;
        ptr->degree = d;
        ptr->next = next;
        return ptr;

}
void printPoly(Term *head)
{
        for (Term *cur = head; cur != NULL; cur = cur->next)
        {
                //can use %lf or g
                // if positve put plus sign
                if(cur == head)
                        printf("%gX^%d",cur->coef,cur->degree);
                else
                        printf("%+gX^%d",cur->coef,cur->degree);
        }
        printf("\n");
}
int countTerms(Term *head)
{
        int count = 0;
        for (Term *cur = head; cur != NULL; cur = cur->next)
        {
                count++;
        }
        return count;

}
Term *searchTerm (Term *head, int degree)
{
        for (Term *cur = head; cur != NULL; cur = cur->next)
        {
                if (cur->degree == degree)
                        return cur;
        }
        return NULL;
}
Term *addFront(Term *head, double c, int d)
{
        return createTerm(c, d, head);

}
Term *addRear(Term *head, double c, int d)
{
        Term *pNew = createTerm(c, d, NULL);
        if(head == NULL)
                return pNew;
        for (Term *cur = head; cur != NULL; cur = cur->next)
                if(cur->next==NULL)
                {
                        cur->next = pNew;
                        return head;
                }
        return NULL; // unreachable this fools the compiler
}
