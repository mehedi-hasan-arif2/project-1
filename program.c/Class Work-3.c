#include <stdio.h>

void searchElement(int MyArray[], int n, int key) {
    int i, found = 0;
    for (i = 0; i < n; i++) {
        if (MyArray[i] == key) {
            found = 1;
            break;
        }
    }
    if (found)
        printf("Key %d is found in the array.\n", key);
    else
        printf("Key %d is not found in the array.\n", key);
}

int main() {
    int MyArray[5] = {5, 10, 15, 20, 25};
    int n = 5;
    int key;

    while (1) {
        printf("Enter a number to search: ");
        scanf("%d", &key);

        searchElement(MyArray, n, key);
    }
    return 0;
}
