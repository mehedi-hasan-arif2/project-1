#include <stdio.h>
#define MAX 10

int q[MAX], f = -1, b = -1;

int isEmpty() { return f == -1 || f > b; }
int isFull() { return b == MAX - 1; }

void enqueue(int x) {
    if (isFull()) return;
    if (isEmpty()) f = 0;
    q[++b] = x;
}

void dequeue() {
    if (isEmpty()) return;
    f++;
    if (f > b) f = b = -1;
}

void display() {
    int i;
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue: ");
    for (i = f; i <= b; i++) printf("%d ", q[i]);
    printf("\n");
}

int main() {
    int i, vals[] = {4, 5, 7, 10, 12};
    for (i = 0; i < 5; i++) enqueue(vals[i]);

    printf("Before dequeue:\n");
    display();

    dequeue();
    dequeue();

    printf("\nAfter dequeue:\n");
    display();

    printf("Queue is %s\n", isEmpty() ? "Empty" : "Not Empty");
    printf("Queue is %s\n", isFull() ? "Full" : "Not Full");

    return 0;
}
