#include <stdio.h>

int main() {
    int X[100];
    int n, value;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &X[i]);

    printf("Enter new element to insert after index %d: ", n-1);
    scanf("%d", &value);

    X[n] = value;
    n++;

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", X[i]);

    return 0;
}

