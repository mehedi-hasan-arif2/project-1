#include <stdio.h>
#define MAX 10

int q[MAX], f = -1, b = -1;

int isEmpty() { return f == -1 || f > b; }
int isFull() { return b == MAX - 1; }

void dequeue() {
    if (isEmpty()) return (void)printf("Queue is empty.\n");
    printf("Removed %d\n", q[f++]);
    if (f > b) f = b = -1;
}

void display(int isFinal) {
    int i;
    if (isEmpty()) return (void)printf("Queue is empty.\n");
    printf("%sQueue: ", isFinal ? "Final " : "");
    for (i = f; i <= b; i++) printf("%d ", q[i]);
    printf("\n");
}

int main() {
    int i, vals[] = {4, 5, 7, 10, 12};
    for (i = 0; i < 5; i++) q[i] = vals[i];
    f = 0; b = 4;

    printf("Before dequeue:\n"); display(0);
    dequeue(); dequeue();
    printf("\nAfter dequeue:\n"); display(1);

    printf("Queue is %s\n", isEmpty() ? "Empty" : "Not Empty");
    printf("Queue is %s\n", isFull() ? "Full" : "Not Full");
    return 0;
}
