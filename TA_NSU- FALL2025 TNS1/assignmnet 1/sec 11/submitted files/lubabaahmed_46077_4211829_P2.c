#include <stdio.h>
void displayArray(int arr[], int size)
{
    printf("Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int k, i;
    int size = 10;

    printf("Delete Element from Array\n");
    displayArray(arr, size);
    printf("Array size: %d\n", size);

    printf("\nEnter index to delete (0 to %d): ", size-1);
    scanf("%d", &k);


    if(k < 0 || k >= size) {
        printf("Error: Index %d is out of bounds!\n", k);
        return 1;
    }

    printf("Deleting element at index %d (value: %d)\n", k, arr[k]);

    for(i = k; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;

    printf("\nElement deleted successfully!\n");
    displayArray(arr, size);
    printf("New array size: %d\n", size);

    return 0;
}
