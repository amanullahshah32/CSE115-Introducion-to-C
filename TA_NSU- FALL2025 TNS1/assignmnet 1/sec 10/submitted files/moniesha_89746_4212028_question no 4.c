#include <stdio.h>

int main() {
    int A[100];
    int n, i, newNum;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i<n; i++)
        scanf("%d", &A[i]);

    printf("Enter new element to insert after first %d elements: ", n);
    scanf("%d", &newNum);

    A[n] = newNum;
    n++;

    printf("Final array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}

