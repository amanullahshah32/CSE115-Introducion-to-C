#include <stdio.h>

int main() {
    int n, value;
    int X[100];

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &X[i]);

    printf("Enter new element to insert at position %d: ", n);
    scanf("%d", &value);

    X[n] = value;
    n++;

    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", X[i]);

    return 0;
}
