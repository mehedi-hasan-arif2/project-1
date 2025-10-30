#include <stdio.h>

void insertElement(int A[], int n, int x, int pos)
{
    int i;
    for (i = n - 1; i >= pos; i--)
        A[i + 1] = A[i];
    A[pos] = x;
}

int main()
{
    int A[10] = {3, 10, 15, 19, 19, 20, 27};
    int n = 7;
    int i;

    printf("Before insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");

    int x = 13, pos = 2;

    insertElement(A, n, x, pos);
    n++;

    printf("After insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);

    return 0;
}

