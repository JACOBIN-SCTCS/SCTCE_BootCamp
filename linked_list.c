


#include "stdio.h"
#include "string.h"
#include "stdlib.h"

struct Student  {

    int rollno;
    char name[100];
    float height;
    struct Student *next;
};

int main() {


    struct Student te ;
    te.rollno = -1;
    strcpy(te.name, "Abhinav MS");
    te.height = 140.0;

    struct Student t2 ;
    te.rollno = -2;
    strcpy(te.name, "Sharan P");
    te.height = 155.0;


    struct Student s1;
    s1.rollno = 1;
    strcpy(s1.name,"Jacob\0");
    s1.height = 170.0;

    struct Student s2;
    s2.rollno = 2;
    strcpy(s2.name,"JC Karthikeyan\0");
    s2.height = 180.0;

    struct Student s3;
    s3.rollno = 3;
    strcpy(s3.name,"Praveen\0");
    s3.height = 160.0;
    s1.next = &s2;
    s2.next = &s3;
    s3.next = NULL;
    struct Student *head = &s1;

    printf("Name of student =  %s\n" , s1.name);

    struct Student *ptr;
    ptr = &s1;

    printf("Name of student via pointer = %s\n", (*ptr).name
           );

    printf("Name using arrow notation %s\n", ptr->name);


    struct Student *temp ;
    temp = head; 

    printf("Linked List Traversal \n\n");
    while(temp != NULL) {
        printf("Name = %s\n", temp->name);
        temp = temp->next;
    }

    struct Student *s4;
    s4 = (struct Student*) malloc(sizeof(struct Student));
    s4->rollno = 4;
    strcpy(s4->name,"Vivek\0");
    s4->height = 175.0;
    s4->next=NULL;

    printf("New Element s4 ROLLNO  = %d", s4->rollno);


    temp = head ;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = s4;
   
    temp = head;
    printf("Linked List Traversal \n\n");
    while(temp != NULL) {
        printf("Name = %s\n", temp->name);
        temp = temp->next;
    }

    struct Student *s5;
    s5 = (struct Student*) malloc(sizeof(struct Student));
    s5->rollno = 0;
    strcpy(s5->name,"Abhijith M\0");
    s5->height = 150.0;
    s5->next=NULL;

    s5->next = head;
    head = s5;


    temp = head;
    printf("Linked List Traversal \n\n");
    while(temp != NULL) {
        printf("Name = %s\n", temp->name);
        temp = temp->next;
    }
    // Try adding a new record at the 3rd position;
    struct Student *s6;
    s6 = (struct Student*) malloc(sizeof(struct Student));
    s6->rollno = 9;
    strcpy(s6->name,"Aditya Suresh\0");
    s6->height = 164.0;
    s6->next=NULL;


    temp = head;
    int i=0;
    while(i<1) {
        temp = temp->next;
        i+=1;
    }

    struct Student *t1 = temp->next;
    temp->next = s6;
    s6->next = t1;

    temp = head;
    printf("Linked List Traversal \n\n");
    while(temp != NULL) {
        printf("Name = %s\n", temp->name);
        temp = temp->next;
    }

    printf("Deleting from beginning of linked list\n");
    struct Student *deltmp = head;
    if(deltmp != NULL) { 

        head = head->next;
        free(deltmp);
    }

    temp = head;
    printf("Linked List Traversal \n\n");
    while(temp != NULL) {
        printf("Name = %s\n", temp->name);
        temp = temp->next;
    }

    printf("Deleting from front of linked list\n");
    // Please write the edge case: only head is present
    temp = head ;
    while(temp->next->next != NULL) {
        temp = temp->next;
    }
    struct Student *last = temp->next;
    temp->next = NULL;
    free(last);

    temp = head;
    printf("Linked List Traversal \n\n");
    while(temp != NULL) {
        printf("Name = %s\n", temp->name);
        temp = temp->next;
    }


    return 0;
}
