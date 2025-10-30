#include <stdio.h>
#define MAX 5

int main() {
    int front = -1, back = -1, queue[MAX], value, i;

    while (1) {
        if (back == MAX - 1) {
            printf("Queue is full. No more values can be inserted.\n");
            break;
        }

        printf("Enter a value to insert: ");
        scanf("%d", &value);

        if (front == -1) {
            front = 0;
        }
        back++;
        queue[back] = value;

        printf("Current queue: ");
        for (i = front; i <= back; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }

    return 0;
}
