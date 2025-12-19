#include <stdio.h>

int main() {
    int n, value;
    int X[100];

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d elements", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &X[i]);

    printf("Enter new element to insert after first %d elements", n);
    scanf("%d", &value);

    X[n] = value;
    n++;

    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", X[i]);

    return 0;
}

