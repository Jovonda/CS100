#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int num;
    struct _node *next;
} Node;

Node *add(Node *head, int n)
{
    if (head==NULL) {
        Node *newNode = malloc( sizeof(Node) );
        newNode->num = n;
        newNode->next = NULL;
        return newNode;
    }
    head->next = add(head->next, n);
    return head;
}

Node *buildList() {
    Node *head = NULL;
    printf("Enter a list of positive integers and use -1 to end:\n");
    while (1) {
        int n;
        scanf("%d", &n);
        if (n==-1) break;
        head = add(head, n);
    }
    return head;
}

// Print the linked list.
// In the printout, two numbers should be connected by an arrow (-->).
// For example, 7-->9-->5-->8
void printList(Node *head)
{
    // add your code here
}

// Build and return a sublist that contains only the integers that are
// greater than the average of all the integers in the input list. 
Node *sublist(Node *head)
{
    // add your code here
    return NULL; // you can change this line too.
}

int main(void) {
    Node *head = buildList();
    printf("The original list: ");
    printList(head);
    Node *head2=sublist(head);
    printf("The resultant sublist: ");
    printList(head2);
    return 0;
}