#include <stdio.h>
#include <stdlib.h>

#include "poly.h"

Term *createTerm(double c, int d, Term *next)
{
        Term *ptr=malloc(sizeof(Term));
        ptr->coef=c;
        ptr->degree=d;
        ptr->next=next;
        return ptr;
}

void printPoly(Term *head)
{
        for (Term *cur=head; cur!=NULL; cur=cur->next) {
                if (cur==head)
                        printf("%gX^%d", cur->coef, cur->degree);
                else
                        printf("%+gX^%d", cur->coef, cur->degree);
        }
        printf("\n");
}

int countTerms(Term *head)
{
        if(head==NULL) return 0;
        return 1 + countTerms(head->next);
}
// int countTerms(Term *head)
// {
//         int count=0;
//         for (Term *cur=head; cur!=NULL; cur=cur->next) {
//                 count++;
//         }
//         return count;
// }

Term *searchTerm(Term *head, int degree)
{
        if(head == NULL) return '\0';
        if(head->degree == degree)
                return head;
        return searchTerm(head->next, degree);
}
// Term *searchTerm(Term *head, int degree)
// {
//         for (Term *cur=head; cur!=NULL; cur=cur->next) {
//                 if (cur->degree==degree) return cur;
//         }
//         return NULL;
// }

Term *addFront(Term *head, double c, int d)
{
        return createTerm(c, d, head);
}

Term *addRear(Term *head, double c, int d)
{
        if(head == NULL)
                return createTerm(c, d, NULL);
        head->next = addRear(head->next, c, d);
        return head;
}
// Term *addRear(Term *head, double c, int d)
// {
//         Term *pNew=createTerm(c, d, NULL);
//
//         if (head==NULL) return pNew;
//
//         for (Term *cur=head; cur!=NULL; cur=cur->next) {
//                 if (cur->next==NULL) {
//                         cur->next=pNew;
//                         return head;
//                 }
//         }
//
//         return NULL; // unreachable
// }

int compareTerms(Term *pNew, Term *pExisting)
{
        if (pNew->degree>pExisting->degree) return -1;
        if (pNew->degree<pExisting->degree) return 1;
        return 0;
}

// a special case of delete because a term with degree==d exists
Term *delete1(Term *head, int d)
{
        if (head->degree==d) { // delete the head
                Term *pDel=head;
                head=head->next;
                free(pDel);
                return head;
        }

        // search
        for (Term *cur=head; cur!=NULL; cur=cur->next) {
                if (cur->next->degree==d) {
                        Term *pDel=cur->next;
                        cur->next=cur->next->next;
                        free(pDel);
                        return head;
                }
        }

        return NULL; // unreachable
}

Term *delete(Term *head, int d)
{
        if(head == NULL)
                return NULL;
        if(head->degree == d)
        {
                Term *pDel = head;
                head = head->next;
                free(pDel);
                return head;
        }
        head->next = delete(head->next, d);
        return head;

}
// a general case of delete because a term with degree==d may or may not exist
// Term *delete(Term *head, int d)
// {
//         Term *pExisting=searchTerm(head, d);
//         if (pExisting==NULL) return head;
//
//         return delete1(head, d);
// }

void freeList(Term *head)
{
        while (head!=NULL) {
                Term *pDel=head;
                head=head->next;
                free(pDel);
        }
}

Term *addOrdered(Term *head, double c, int d)
{
        if(head==NULL)
                return createTerm(c, d, NULL);
        if(head->degree == d)
        {
                head->coef += c;
                if(head->coef == 0.0)
                {
                        Term*pDel = head;
                        head=head->next;
                        free(pDel);
                }
        }
        else if (head->degree < d)
        {
                head = createTerm(c, d, head);
        }
        else
        {
                //head->degree > d
                head->next = addOrdered(head->next, c, d);
        }
        return head;
}
// Term *addOrdered(Term *head, double c, int d)
// {
//         Term *pExisting=searchTerm(head, d);
//         if (pExisting!=NULL) {
//                 pExisting->coef += c;
//                 if (pExisting->coef==0.0) return delete1(head, d);
//                 return head;
//         }
//
//         Term *pNew=createTerm(c, d, NULL);
//
//         // case #1: empty list
//         if (head==NULL) return pNew;
//
//         // d is largest, add at front
//         if (compareTerms(pNew, head)<0) {
//                 pNew->next=head;
//                 return pNew;
//         }
//
//         // search
//         for (Term *cur=head; cur!=NULL; cur=cur->next) {
//                 if (cur->next==NULL) { // case #3: d is smallest, add at end
//                         cur->next=pNew;
//                         return head;
//                 }
//                 if (compareTerms(pNew, cur->next)<0) { // case #4: insert between cur and cur->next
//                         pNew->next=cur->next;
//                         cur->next=pNew;
//                         return head;
//                 }
//         }
//
//         return NULL; // unreachable
// }
