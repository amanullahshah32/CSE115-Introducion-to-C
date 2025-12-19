#include <stdio.h>
int main() {
    int X[101];   // 100 elements + 1 extra space for insertion
    int n, i, newElement;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &X[i]);
    }
    printf("Enter the new element to insert after %dth element: ", n);
    scanf("%d", &newElement);

    X[n] = newElement;
    n++;
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", X[i]);
    }
    return 0;
}
