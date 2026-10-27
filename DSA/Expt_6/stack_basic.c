#include <stdio.h>
#define TOP 100

int stack[TOP];
int top = -1;

int isEmpty(void);
int isFull(void);

void push(int a) {
  if (isFull()) {
    printf("Stack overflow\n");
  } else {
    top++;
    stack[top] = a;
    printf("%d pushed\n", a);
  }
}

void pop() {
  if (isEmpty()) {
    printf("Stack underflow\n");
  } else {
    printf("%d popped\n", stack[top]);
    top--;
  }
}

void display() {
  if (isEmpty()) {
    printf("Stack is empty\n");
  } else {
    printf("Stack contents (top to bottom):\n");
    for (int i = top; i >= 0; i--) {
      printf("[%d]\n", stack[i]);
    }
  }
}

int isEmpty() {
  if (top == -1) {
    return 1;
  } else {
    return 0;
  }
}

int isFull() {
  if (top == TOP - 1) {
    return 1;
  } else {
    return 0;
  }
}

int main(void) {
  int choice, value;

  while (1) {
    printf("\nSTACK MENU: \n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Enter value to push: ");
        scanf("%d", &value);
        push(value);
        break;
      case 2:
        pop();
        break;
      case 3:
        display();
        break;
      case 4:
        printf("Ending.....\n");
        return 0;
      default:
        printf("Invalid input! Please select from given options only\n");
    }
  }

  return 0;
}