


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

    return 0;
}
