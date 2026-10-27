#include<stdio.h>
#include<stdlib.h>

typedef struct poly {
    int coeff;
    int exp;
    struct poly *next;
} poly;

void create(poly *head);
void display(poly *H);
void add(poly *p1, poly *p2, poly *sum);
void append(poly **tail, poly *head, int coeff, int exp);

int main(){
    struct poly *p1, *p2, *sum;
    p1 = (struct poly *)malloc(sizeof(struct poly));
    p2 = (struct poly *)malloc(sizeof(struct poly));
    sum = (struct poly *)malloc(sizeof(struct poly));
    p1->next = p1;
    p2->next = p2;
    sum->next = sum;

    printf("First polynomial (enter terms in decreasing order of exponent)");
    create(p1);
    printf("\nSecond polynomial (enter terms in decreasing order of exponent)");
    create(p2);

    printf("\nFirst polynomial : ");
    display(p1);
    printf("Second polynomial: ");
    display(p2);

    add(p1, p2, sum);
    printf("Sum              : ");
    display(sum);
}

void append(struct poly **tail, struct poly *head, int coeff, int exp) {
    struct poly *curr;
    curr = (struct poly *)malloc(sizeof(struct poly));
    curr->coeff = coeff;
    curr->exp = exp;
    curr->next = head;
    (*tail)->next = curr;
    *tail = curr;
}

void create(struct poly *head) {
    char ch;
    int coeff, exp;
    struct poly *temp;
    temp = head;
    do {
        printf("\nEnter coefficient and exponent:");
        scanf("%d%d", &coeff, &exp);
        append(&temp, head, coeff, exp);
        printf("do u want to add more terms(y/n)");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');
}

void display(struct poly *H) {
    struct poly *p = H->next;
    if (p == H) {
        printf("0\n");
        return;
    }
    while (p != H) {
        printf("%dx^%d", p->coeff, p->exp);
        if (p->next != H)
            printf(" + ");
        p = p->next;
    }
    printf("\n");
}

void add(struct poly *p1, struct poly *p2, struct poly *sum) {
    struct poly *a = p1->next, *b = p2->next, *tail = sum;
    while (a != p1 && b != p2) {
        if (a->exp == b->exp) {
            append(&tail, sum, a->coeff + b->coeff, a->exp);
            a = a->next;
            b = b->next;
        } else if (a->exp > b->exp) {
            append(&tail, sum, a->coeff, a->exp);
            a = a->next;
        } else {
            append(&tail, sum, b->coeff, b->exp);
            b = b->next;
        }
    }
    while (a != p1) {
        append(&tail, sum, a->coeff, a->exp);
        a = a->next;
    }
    while (b != p2) {
        append(&tail, sum, b->coeff, b->exp);
        b = b->next;
    }
}
