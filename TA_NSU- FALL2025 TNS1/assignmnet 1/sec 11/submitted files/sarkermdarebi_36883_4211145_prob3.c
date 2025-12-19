#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

static bool exists(const int *a, int n, int v) {
    for (int i = 0; i < n; ++i) if (a[i] == v) return true;
    return false;
}

static void print_array(const int *a, int n) {
    for (int i = 0; i < n; ++i) {
        if (i) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) {
        fprintf(stderr, "Invalid n\n");
        return 1;
    }

    // one extra element for insertion
    int *a = (int *)malloc((n + 1) * sizeof(int));
    if (!a) {
        fprintf(stderr, "Allocation failed\n");
        return 1;
    }

    // read n unique integers
    for (int i = 0; i < n; ) {
        int v;
        if (scanf("%d", &v) != 1) {
            fprintf(stderr, "Invalid input\n");
            free(a);
            return 1;
        }
        if (exists(a, i, v)) {
            continue;
        }
        a[i++] = v;
    }

    int k, x;
    if (scanf("%d %d", &k, &x) != 2) {
        fprintf(stderr, "Invalid index/value\n");
        free(a);
        return 1;
    }

    if (k < 0 || k > n) {
        fprintf(stderr, "Index out of range\n");
        free(a);
        return 1;
    }

    if (exists(a, n, x)) {
        fprintf(stderr, "Value already exists; insertion aborted\n");
        print_array(a, n);
        free(a);
        return 0;
    }

    // shift right to make room at index k
    memmove(&a[k + 1], &a[k], (size_t)(n - k) * sizeof(int));
    a[k] = x;
    ++n;

    print_array(a, n);

    free(a);
    return 0;
}
