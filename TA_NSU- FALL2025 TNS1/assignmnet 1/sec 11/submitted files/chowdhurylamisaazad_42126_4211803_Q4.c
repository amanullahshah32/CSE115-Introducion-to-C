
#include <stdio.h>

int main() {
    int X[100];
    int n, value;

    printf("Enter number of elements (n): ");
    scanf("%d", &n);

    if (n < 0 || n >= 100) {
        printf("Invalid n!\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &X[i]);
    }

    printf("Enter the new element to insert after the %d-th element: ", n);
    scanf("%d", &value);
    X[n] = value;
    n++;
    printf("Updated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", X[i]);
    }

    printf("\n");
    return 0;
}
