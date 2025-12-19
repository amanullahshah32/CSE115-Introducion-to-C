#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int X[MAX_SIZE];
    int n, i, newElement;

    printf("Array Population and Insertion\n");
    printf("Array can hold maximum %d elements\n\n", MAX_SIZE);

    printf("Enter how many elements to populate (1 to %d): ", MAX_SIZE - 1);
    scanf("%d", &n);


    if(n <= 0 || n >= MAX_SIZE)
    {
        printf("Invalid input! n should be between 1 and %d\n", MAX_SIZE - 1);
        return 1;
    }


    printf("\nEnter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element X[%d]: ", i);
        scanf("%d", &X[i]);
    }

    printf("\nFirst %d elements in array:\n", n);
    for(i = 0; i < n; i++) {
        printf("X[%d] = %d\n", i, X[i]);
    }

    printf("\nEnter new element to add after the first %d elements: ", n);
    scanf("%d", &newElement);

    X[n] = newElement;
    n++;

    printf("\nFinal array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("X[%d] = %d\n", i, X[i]);
    }
    printf("Total elements: %d\n", n);

    return 0;
}
