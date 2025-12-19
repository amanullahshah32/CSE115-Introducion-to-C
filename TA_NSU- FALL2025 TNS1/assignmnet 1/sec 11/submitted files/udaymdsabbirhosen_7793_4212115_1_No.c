#include <stdio.h>

int main() {
    int n, k, i;
    int arr[100];

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d unique integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter index k to modify (0 to %d): ", n - 1);
    scanf("%d", &k);



    printf("Enter new value: ");
    scanf("%d", &arr[k]);

    printf("Array after modification:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
