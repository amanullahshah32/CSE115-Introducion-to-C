#include <stdio.h>

int main(void)
{
    int X[100], n, i, newElement;

    printf("Enter n (number of elements): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &X[i]);

    printf("Enter new element to insert after the first %d elements: ", n);
    scanf("%d", &newElement);

    if (n < 100) {
        X[n] = newElement; // put after first n elements
        n++;
    } else {
        printf("Array is full!\n");
    }

    printf("Array after adding new element:\n");
    for (i = 0; i < n; i++)
        printf("%d ", X[i]);
    printf("\n");

    return 0;
}

