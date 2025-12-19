#include <stdio.h>

int main() {
    int X[100], n, i, val;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    scanf("%d", &X[i]);

    printf("Enter new element to insert: ");
    scanf("%d", &val);

    X[n] = val;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)

        printf("%d ", X[i]);

    return 0;
}
