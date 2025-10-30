#include <stdio.h>
#define SIZE 3

char stack[SIZE];
int top = -1;

void push(char val) {
    if (top == SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = val;
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    printf("Popped: %c\n", stack[top--]);
}

void display() {
    int i;
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack: ");
    for (i = top; i >= 0; i--) {
        printf("%c ", stack[i]);
    }
    printf("\n");
}

int main() {
    push('A');
    push('B');
    push('C');

    printf("Stack after Push:\n");
    display();

    pop();

    printf("Stack after one Pop:\n");
    display();

    return 0;
}
