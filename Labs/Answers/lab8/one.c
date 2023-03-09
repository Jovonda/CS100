#include <stdio.h>

typedef struct _letter {
        char info;
        struct _letter *next;
} Letter;

void printList(Letter *head)
{
        Letter *ptr = head;
        while ( ptr != NULL ) {
                printf("%c", ptr->info);
                ptr = ptr->next;
        }
        printf("\n");
}

int main(void) {
        Letter a, b, c, d, e, f, g, h, i, j, k, l, m;

        a.info = 'E'; b.info = 'L'; c.info = 'E';
        d.info = 'V'; e.info = 'E'; f.info = 'N';
        g.info = 'P'; h.info = 'L'; i.info = 'U';
        j.info = 'S'; k.info = 'T'; l.info = 'W';
        m.info = 'O';

        // Link the 13 nodes to get a list that spells "ELEVENPLUSTWO"
        a.next = &b; b.next = &c; c.next = &d;
        d.next = &e; e.next = &f; f.next = &g;
        g.next = &h; h.next = &i; i.next = &j;
        j.next = &k; k.next = &l; l.next = &m;
        m.next = NULL;

        // Print the word
        printList(&a);

        // Relink the 13 nodes here to get a list that spells "TWELVEPLUSONE"
        // NOTE: YOU CANNOT CHANGE THE "info" FIELD of ANY NODES

        k.next = &l; l.next = &a; a.next = &b;
        b.next = &d; d.next = &e; e.next = &g;
        g.next = &h; h.next = &i; i.next = &j;
        j.next = &m; m.next = &f; f.next = &c;
        c.next = NULL;
        // After relinking, print the new word
        printList(&k);

        return 0;
}
