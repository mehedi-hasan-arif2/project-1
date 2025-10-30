#include <stdio.h>

#define MAX 6

int front = -1;
int back = -1;
int queue[MAX];

void Insertqueue(int item) {
    if (back == MAX - 1) {
        printf("Sorry, the queue is full.\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        back++;
        queue[back] = item;
        printf("Inserted %d into the queue.\n", item);
    }
}

void DeleteOne() {
    if (front == -1 || front > back) {
        printf("Queue is empty. Nothing to delete.\n");
    } else {
        printf("Deleted %d from the queue.\n", queue[front]);
        front++;
        if (front > back) {
            front = -1;
            back = -1;
        }
    }
}

void Displayqueue() {
    if (front == -1 || front > back) {
        printf("Queue is empty.\n");
    } else {
        int i;
        printf("Queue elements: ");
        for (i = front; i <= back; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    Insertqueue(15);
    Insertqueue(25);
    Insertqueue(35);

    printf("\nDisplaying the queue:\n");
    Displayqueue();

    printf("\nDeleting one element from the queue:\n");
    DeleteOne();

    printf("\nDisplaying the queue after deletion:\n");
    Displayqueue();

    return 0;
}
