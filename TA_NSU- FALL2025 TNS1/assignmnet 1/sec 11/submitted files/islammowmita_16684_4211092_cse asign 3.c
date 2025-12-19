#include <stdio.h>

int main() {
    int n, k, value;
    int arr[100];

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d unique integers:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter index k to insert at: ");
    scanf("%d", &k);

    if(k < 0 || k > n) {
        printf("Invalid index!\n");
        return 0;
    }

    printf("Enter new value: ");
    scanf("%d", &value);

    for(int i = n; i > k; i--)
        arr[i] = arr[i - 1];

    arr[k] = value;
    n++;

    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
