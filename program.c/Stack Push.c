#include <stdio.h>
#define SIZE 10

int stack[SIZE], top = -1;

void display() {
    int i;
    if (top == -1) return;
    printf("Stack: ");
    for (i = top; i >= 0; i--) printf("%d ", stack[i]);
    printf("\n");
}

void push(int val) {
    if (top == SIZE - 1) {
        printf("OVERFLOW\n");
        return;
    }
    stack[++top] = val;
    printf("Pushed %d\n", val);
    display();
}

int main() {
    int x;
    printf("Enter elements (max %d, Enter to stop): ", SIZE);
    while (top < SIZE - 1) {
        if (scanf("%d", &x) != 1) break;
        push(x);
        if (getchar() == '\n') break;
    }
    printf("\nFinal ");
    display();
    printf("Stack is %s\n", top == SIZE - 1 ? "Full" : "Not Full");
    return 0;
}
