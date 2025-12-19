#include <stdio.h>

int main() {
    int arr[100], n, k, new_Val, i;

    printf("Enter array size: ");
    scanf("%d", &n);


    printf("Enter %d unique integers:\n", n);
    for(i = 0; i < n; i++)
    scanf("%d", &arr[i]);

    printf("Enter index to modify: ");
    scanf("%d", &k);

    if(k >= 0 && k < n) {
        printf("Enter new value: ");
        scanf("%d", &new_Val);
        arr[k] = new_Val;
    }

    else {
        printf("Invalid index.\n");
        return 0;

    }

    printf("Array after modification:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);


    return 0;
}
