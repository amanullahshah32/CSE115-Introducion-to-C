#include <stdio.h>

int main() {
    int X[100];
    int n, i, newVal;

    printf("Enter n (<=100): ");
    scanf("%d", &n);


    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &X[i]);
    }


    printf("Enter new element to insert after first %d elements: ", n);
    scanf("%d", &newVal);

    X[n] = newVal;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", X[i]);
    }
    printf("\n");

    return 0;
}
