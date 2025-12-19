#include <stdio.h>

int main() {
    int arr[100], n, k, i;

    printf("Enter array size: ");
    scanf("%d", &n);


    printf("Enter %d unique integers:\n", n);
    for(i = 0; i < n; i++)
    scanf("%d", &arr[i]);


    printf("Enter index to delete: ");
    scanf("%d", &k);

    if(k < 0 || k >= n) {

        printf("Invalid index.\n");
        return 0;
    }

    for(i = k; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);


    return 0;
}
