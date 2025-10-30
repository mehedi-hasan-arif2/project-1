#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct N { int d; struct N* n; } N; N* h = 0;

void insert(int v, int p) {
    N *x = malloc(sizeof(N)), *t = h; x->d = v;
    if (!p || !h) { x->n = h; h = x; return; }
    while (--p && t) t = t->n;
    if (!t) return; x->n = t->n; t->n = x;
}

void delete(int p) {
    N *t = h, *r = 0;
    if (!h) return;
    if (!p) { h = t->n; return free(t); }
    while (p-- && t) r = t, t = t->n;
    if (!t) return; r->n = t->n; free(t);
}

int search(int k) { N* t = h; while (t) { if (t->d == k) return 1; t = t->n; } return 0; }

void sort() {
    N *i, *j;
    for (i = h; i; i = i->n)
        for (j = i->n; j; j = j->n)
            if (i->d > j->d) i->d ^= j->d ^= i->d ^= j->d;
}

void print() {
    N* t;
    for (t = h; t; t = t->n) printf("%d ", t->d);
    puts("");
}

int main() {
    char l[256], *t;
    int v, p, k, i = 0;
    printf("Enter the elements: "); fgets(l, sizeof(l), stdin);
    for (t = strtok(l, " \n"); t; t = strtok(0, " \n")) insert(atoi(t), i++);
    printf("Delete position: "); scanf("%d", &p); delete(p);
    printf("List after deletion: "); print();
    printf("Search value: "); scanf("%d", &k);
    puts(search(k) ? "Found" : "Not Found");
    sort(); printf("Sorted List: "); print();
}
