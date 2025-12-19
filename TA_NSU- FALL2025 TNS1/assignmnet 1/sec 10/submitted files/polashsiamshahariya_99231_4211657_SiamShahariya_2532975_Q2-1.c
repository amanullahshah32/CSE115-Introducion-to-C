#include <stdio.h>
int main() {
    int n, i, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d unique integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter index k to delete (0 to %d): ", n - 1);
    scanf("%d", &k);
    for (i = k; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
