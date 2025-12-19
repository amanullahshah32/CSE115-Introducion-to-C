#include <stdio.h>
int main() {
    int X[100];
    int n, newValue;


    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &X[i]);
    }

    printf("Enter a new element to insert: ");
    scanf("%d", &newValue);

    X[n] = newValue;
    n++;

    printf("\nArray after inserting the new element:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", X[i]);
    }

    return 0;
}

