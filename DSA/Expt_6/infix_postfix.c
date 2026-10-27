#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

int isEmpty() {
  if (top == -1) {
    return 1;
  } else {
    return 0;
  }
}

int isFull() {
  if (top == MAX - 1) {
    return 1;
  } else {
    return 0;
  }
}

void push(char item) {
  if (isFull()) {
    printf("Stack overflow\n");
  } else {
    top++;
    stack[top] = item;
  }
}

char pop() {
  if (isEmpty()) {
    return '\0'; 
  } else {
    char item = stack[top];
    top--;
    return item;
  }
}

char peek() {
  if (isEmpty()) {
    return '\0';
  } else {
    return stack[top];
  }
}

int isOperand(char c) {
  return isalnum(c); 
}

int getICP(char op) {
  if (op == '(') return 4;
  if (op == '^') return 4;
  if (op == '*' || op == '/') return 2;
  if (op == '+' || op == '-') return 1;
  return -1;
}

int getISP(char op) {
  if (op == '^') return 3;
  if (op == '*' || op == '/') return 2;
  if (op == '+' || op == '-') return 1;
  if (op == '(') return 0;
  return -1;
}

void infixToPostfix(char infix[]) {
  char postfix[MAX];
  int i = 0, j = 0;
  
  top = -1; 

  while (infix[i] != '\0') {
    char current = infix[i];

    if (isOperand(current)) {
      postfix[j++] = current;
    } 
    else if (current == ')') {
      char x;
      while ((x = pop()) != '(' && x != '\0') {
        postfix[j++] = x;
      }
    } 
    else {
      while (!isEmpty() && getISP(peek()) >= getICP(current)) {
        postfix[j++] = pop();
      }
      push(current);
    }
    i++;
  }

  while (!isEmpty()) {
    postfix[j++] = pop();
  }

  postfix[j] = '\0';
  printf("Postfix Expression: %s\n", postfix);
}

int main(void) {
  int choice;
  char infix[MAX];

  while (1) {
    printf("\n--- Infix to Postfix Menu ---\n");
    printf("1. Convert Infix to Postfix\n");
    printf("2. Exit\n");
    printf("Enter your choice: ");
    
    if (scanf("%d", &choice) != 1) break;

    switch (choice) {
      case 1:
        printf("Enter Infix Expression (no spaces): ");
        scanf("%s", infix);
        infixToPostfix(infix);
        break;
      case 2:
        printf("Exiting program...\n");
        return 0;
      default:
        printf("Invalid choice! Please select 1 or 2.\n");
    }
  }

  return 0;
}
