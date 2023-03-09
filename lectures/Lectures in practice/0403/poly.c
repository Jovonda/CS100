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
        if(head == NULL) return pNew;
        for (Term *cur = head; cur != NULL; cur = cur->next)
        {
                if(cur->next==NULL)
                {
                        cur->next = pNew;
                        return head;
                }
        }
        return NULL; // unreachable this fools the compiler
}
int compareTerms(Term *pNew, Term *pExisting)
{
        // use this to change the addOrdered
        // if always 1 add at end
        // if always -1 add at the begining
        if(pNew->degree>pExisting->degree) return -1;
        if(pNew->degree>pExisting->degree) return 1;
        return 0;
}
Term *addOrdered(Term *head, double c, int d)
{
        Term *pNew = createTerm(c, d, NULL);
        //case #1; empty list
        if(head == NULL)
                return pNew;

        //case #2: d is largest, add to addFront
        if(compareTerms(pNew, head) < 0)
        {
                pNew->next= head;
                return pNew;
        }

        //search
        for (Term *cur = head; cur != NULL; cur = cur->next)
        {
                if(cur->next==NULL)
                {
                        //case #3 d is smallest, add at the end
                        cur->next =pNew;
                        return head;
                }
                if(compareTerms(pNew, cur->next)< 0)
                {
                        //case #4: insert between cur and cur->next
                        pNew->next = cur->next;
                        cur->next = pNew;
                        return head;
                }
        }
        return NULL; // unreachable this fools the compiler
}
