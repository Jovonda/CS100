#include <stdio.h>
#include <stdlib.h>

typedef struct _term
{
        double coef;
        int degree;
        struct _term *next;
}Term;
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
int main(int argc, char const *argv[]) {
        // Letter *pOne, *pTwo, *pThree, *pFour;
        // start off with empty list
        printf("size =%d\n", (int)sizeof(Term));
        Term *head=NULL;
        // Gets last term and prints the last that was added first
        head = createTerm(17.3, 1, head);
        head = createTerm(2.5, 2, head);
        head = createTerm(5.5, 4,  head);

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
