#include <stdio.h>

void shiftArr1Pos(int arr[], int arrSize) {
    int last = arr[arrSize - 1];
    int i;
    for (i = arrSize - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}

void arrRotate(int arr[], int arrSize, int rotFrom) {
    int i;
    for (i = 0; i < rotFrom; i++) {
        shiftArr1Pos(arr, arrSize);
    }
}

int main() {
    int num, rotate, i;

    printf("Enter size of array: ");
    scanf("%d", &num);

    int a[num];

    printf("Enter %d elements: ", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number of positions to rotate (must be less than array size): ");
    scanf("%d", &rotate);

    arrRotate(a, num, rotate);

    printf("Array after rotation: ");
    for (i = 0; i < num; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
