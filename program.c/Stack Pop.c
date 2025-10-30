#include <stdio.h>
#define SIZE 10

int stack[SIZE], top = 2;

void display() {
    int i;
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack: ");
    for (i = top; i >= 0; i--) printf("%d ", stack[i]);
    printf("\n");
}

void pop() {
    if (top == -1) {
        printf("UNDERFLOW\n");
        return;
    }
    printf("Popped %d\n", stack[top--]);
    display();
}

int main() {
    stack[0] = 10; stack[1] = 20; stack[2] = 30;

    printf("Initial Stack:\n");
    display();

    printf("\nStarting POP operations:\n");
    pop(); pop(); pop(); pop();

    return 0;
}
