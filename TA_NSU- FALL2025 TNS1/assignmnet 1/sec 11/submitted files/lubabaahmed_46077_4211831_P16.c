#include <stdio.h>

int main() {
    int arr[10];
    int i, j, temp;


    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    printf("\nOriginal array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }


    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    printf("\nSorted array (ascending): ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
