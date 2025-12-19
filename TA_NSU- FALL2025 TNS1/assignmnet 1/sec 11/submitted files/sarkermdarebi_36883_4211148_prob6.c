#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) {
        return 0;
    }

    int *a = (int *)malloc((n > 0 ? n : 1) * sizeof(int));
    if (!a) return 0;

    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &a[i]) != 1) { free(a); return 0; }
    }

    int uniques = 0;
    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (a[i] == a[j]) {
                ++count;
                if (count > 1) break;
            }
        }
        if (count == 1) {
            if (uniques == 0) {
                printf("Unique elements: ");
            }
            printf("%d ", a[i]);
            ++uniques;
        }
    }

    if (uniques == 0) {
        printf("No unique elements");
    }
    printf("\n");

    free(a);
    return 0;
}
