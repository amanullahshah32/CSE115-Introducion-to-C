#include <stdio.h>

int main() {
    int arr[100], n, k, newValue;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d unique integers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter index to modify (0 to %d): ", n-1);
    scanf("%d", &k);

    if(k < 0 || k >= n) {
        printf("Invalid index!\n");
        return 0;
    }

    printf("Enter new value: ");
    scanf("%d", &newValue);

    arr[k] = newValue;

    printf("Modified array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
