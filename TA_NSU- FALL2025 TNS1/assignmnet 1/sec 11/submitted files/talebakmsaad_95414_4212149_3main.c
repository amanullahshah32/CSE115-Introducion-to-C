#include <stdio.h>

int main() {
    int arr[100], n, k, i, new_Val;

    printf("Enter array size: ");
    scanf("%d", &n);


    printf("Enter %d unique integers:\n", n);
    for(i = 0; i < n; i++)
    scanf("%d", &arr[i]);

    printf("Enter index to insert at: ");
    scanf("%d", &k);

    if(k < 0 || k > n) {

        printf("Invalid index.\n");
        return 0;
    }

    printf("Enter new value: ");
    scanf("%d", &new_Val);

    for(i = n; i > k; i--)
        arr[i] = arr[i - 1];

    arr[k] = new_Val;

    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
