#include<stdio.h>
#include<stdlib.h>

#define MAX 100

typedef struct student {
    int regno;
    char name[50];
    struct student *next;
} student;

void create(student *head);
void display( student *H);
int len(student *head);

int main(){
    struct student *head;
    head =(struct student *)malloc(sizeof(struct student));
    head->next = NULL;
    create(head);
    display(head);
    printf("Length = %d\n", len(head));
}


void create(struct student *head) {
    int num;
    char ch;
    struct student *temp, *curr;
    temp = head;
    do {
        curr = (struct student *)malloc(sizeof(struct student));
        printf("\nEnter Registration number and name:");
        scanf("%d%s", &curr->regno, curr->name);
        curr->next = NULL;
        temp->next = curr;
        temp = curr;
        printf("do u want to add more nodes(y/n)");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');
}

void display(struct student *H) {
    struct student *p = H->next;   
    printf("\nRegNo\tName\n");
    while (p != NULL) {
        printf("%d\t%s\n", p->regno, p->name);
        p = p->next;
    }
}

int len(struct student *head){
    int i = 0;
    struct student *curr;
    curr = head -> next;
    while(curr!= NULL){
        i++;
        curr = curr -> next;
    }
    return (i);

}

void Sort(struct node *head){
    
}