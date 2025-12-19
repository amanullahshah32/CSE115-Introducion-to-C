#include <stdio.h>

int main() {
    int X[100];
    int n, newValue;
    printf("Enter number of elements (n): ");
    scanf("%d", &n); 
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &X[i]);
    }
    printf("Enter new element to insert after the first %d elements: ", n);
    scanf("%d", &newValue);
    X[n] = newValue;
    n++; 
    printf("\nArray after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", X[i]);
    }
    printf("\n");

    return 0;
}
