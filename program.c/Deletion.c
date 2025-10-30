#include <stdio.h>

void delete(int A[], int *n, int pos) {
    if (pos < 0 || pos >= *n) {
        printf("Invalid position! Deletion failed.\n");
        return;
    }
    int i;
    for (i = pos; i < *n - 1; i++) A[i] = A[i + 1];
    (*n)--;
}

int search(int A[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) if (A[i] == key) return 1;
    return 0;
}

void sort(int A[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (A[j] > A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
}

int main() {
    int A[10], n = 0, pos, key, i;
    char ch;

    printf("Enter elements (max 10, press Enter to stop): ");
    while (n < 10) {
        if (scanf("%d", &A[n]) != 1) break;
        n++;
        ch = getchar();
        if (ch == '\n') break;
    }

    printf("Enter position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    delete(A, &n, pos);

    printf("Array after deletion: ");
    for (i = 0; i < n; i++) printf("%d ", A[i]);
    printf("\n");

    printf("Enter element to search: ");
    scanf("%d", &key);
    printf("Search result: %s\n", search(A, n, key) ? "Found" : "Not Found");

    printf("Array after sorting: ");
    sort(A, n);
    for (i = 0; i < n; i++) printf("%d ", A[i]);

    return 0;
}

