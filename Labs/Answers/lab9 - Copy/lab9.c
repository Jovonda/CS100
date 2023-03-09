#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Need more information on how to do this
typedef struct _student {
        char *name;
        double gpa;
        struct _student *next;
} Student;
Student *createStudent(char name[], double gpa, Student *next) {
        Student *pNew=malloc(sizeof(Student));
        pNew->name=malloc(strlen(name)+1);
        strcpy(pNew->name, name);
        pNew->gpa = gpa;
        pNew->next = next;
        return pNew;
}
int compareStudents(Student *pNew, Student *pExisting) {
        if(pNew->gpa>pExisting->gpa) return -1;
        if(pNew->gpa<pExisting->gpa) return 1;
        if(pNew->gpa==pExisting->gpa)
        {
                if(strcmp(pNew->name,pExisting->name)>0)
                        return 1;
                if(strcmp(pNew->name,pExisting->name)<0)
                        return -1;
        }
        return 0;
        //return -1;
}
Student *add(Student *head, char name[], double gpa) {
        Student *pNew = createStudent(name, gpa, NULL);
        //case #1; empty list
        //printf("The student was made, but not added\n");
        if(head == NULL)
        {
                //printf("This is the first student added\n");
                return pNew;
        }
        for (Student *cur = head; cur != NULL; cur = cur->next)
        {
                if(strcmp(pNew->name, cur->name)==0)
                {
                        printf("This name already exists, try again.");
                        pNew->next = cur->next;
                        //cur->next = NULL;
                        return head;
                        break;
                }
        }
        //case #2: d is largest, add to addFront
        if(compareStudents(pNew, head) < 0)
        {
                pNew->next= head;
                return pNew;
        }


        //search
        for (Student *cur = head; cur != NULL; cur = cur->next)
        {
                if(cur->next==NULL)
                {
                        //case #3 d is smallest, add at the end
                        cur->next =pNew;
                        return head;
                }
                if(compareStudents(pNew, cur->next)< 0)
                {
                        //case #4: insert between cur and cur->next
                        pNew->next = cur->next;
                        cur->next = pNew;
                        return head;
                }
        }
        return NULL; // unreachable this fools the compiler
        //return createStudent(name, gpa, head);
}
void print(char prefix[], Student *head) {
        printf("%s", prefix);
        for (Student *ptr=head; ptr!=NULL; ptr=ptr->next)
                printf("[%s-%g] ", ptr->name, ptr->gpa);
        printf("\n");
}
double getGPA(Student *head, char name[]) {

        for (Student *cur = head; cur != NULL; cur = cur->next)
        {
                if (strcmp(cur->name, name)==0)
                        return cur->gpa;
        }
        return -1.0;
}
int main(void) {
        char name[100];
        double gpa;
        Student *head = NULL;
        while (1) { // build the list
                printf("\nEnter a name (one word) and gpa, or xxx and 0 to exit: ");
                scanf("%s%lf", name, &gpa);
                if (strcmp(name, "xxx")==0) break;
                head=add(head, name, gpa);
                print("\n\tNow the list is: ", head);
        }
        while (1) { // perform search
                printf("\nEnter a name to look up the gpa or xxx to exit: ");
                scanf("%s", name);
                if (strcmp(name, "xxx")==0) break;
                gpa=getGPA(head, name);
                if (gpa<0)
                        printf("\n\t%s does not exist\n", name);
                else
                        printf("\n\t%s has a GPA of %g\n", name, gpa);
        }
        return 0;
}
