#include <stdio.h>

int main() {
    int X[100], n, newvalue;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &X[i]);
    }

    printf("Enter new element to insert at the end: ");
    scanf("%d", &newvalue);

    X[n] = newvalue;
    n++;
    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", X[i]);
    }

    return 0;
}
