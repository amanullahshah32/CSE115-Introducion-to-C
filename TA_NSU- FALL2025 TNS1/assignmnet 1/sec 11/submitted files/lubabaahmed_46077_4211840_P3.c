#include <stdio.h>
void displayArray(int arr[], int size)
 {
    printf("Array: ");
    for(int i = 0; i < size; i++)
     {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[12] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int k, newValue, i;
    int size = 10;
    int capacity = 12;

    printf("Insert Element into Array\n");
    displayArray(arr, size);
    printf("Current size: %d | Maximum capacity: %d\n\n", size, capacity);


    printf("Enter index for insertion (0 to %d): ", size);
    scanf("%d", &k);

    if(k < 0 || k > size) {
        printf("Error: Invalid index! Must be between 0 and %d\n", size);
        return 1;
    }


    if(size >= capacity) {
        printf("Error: Array is full! Cannot insert.\n");
        return 1;
    }

    printf("Enter value to insert: ");
    scanf("%d", &newValue);


    printf("\nInserting %d at index %d...\n", newValue, k);


    for(i = size; i > k; i--) {
        arr[i] = arr[i - 1];
    }

    arr[k] = newValue;
    size++;

    printf("\nInsertion successful!\n");
    displayArray(arr, size);
    printf("New size: %d\n", size);

    return 0;
}
