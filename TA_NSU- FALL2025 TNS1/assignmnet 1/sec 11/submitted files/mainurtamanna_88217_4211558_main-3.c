#include <stdio.h>
#include <stdlib.h>

int main() {
    int X[100], n, value;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &X[i]);

    printf("Enter new element to insert after n elements: ");
    scanf("%d", &value);

    X[n] = value;

    printf("Array: ");
    for(int i=0; i<=n; i++)
        printf("%d ", X[i]);


    return 0;
}
