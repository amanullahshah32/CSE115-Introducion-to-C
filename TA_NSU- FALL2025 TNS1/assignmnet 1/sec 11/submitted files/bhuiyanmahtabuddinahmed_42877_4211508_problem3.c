#include <stdio.h>

int main() {
    int n, k, value;
    int arr[200];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d unique integers", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter index k to insert at ");
    scanf("%d", &k);

    if(k < 0 || k > n) {
        printf("Invalid index\n");
        return 0;
    }

    printf("Enter value to insert: ");
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

