#include <stdio.h>

    void shiftArr1Pos(int arr[], int arrSize) {
        int temp = arr[0];
        for(int i = 1; i < arrSize; i++)
            arr[i-1] = arr[i];
        arr[arrSize-1] = temp;
}

    void arr1Rotate(int arr[], int arrSize, int rotFrom)
     {
        for(int i = 0; i < rotFrom; i++)
            shiftArr1Pos(arr, arrSize);
}

    int main() {
        int n, rot;
            printf("Enter array size : ");
            scanf("%d", &n);

    int arr[n];
            printf("Enter array elements :\n");
    for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
            printf("Enter N (positions to rotate) : ");
            scanf("%d", &rot);

        arr1Rotate(arr, n, rot);
            printf(" After rotating : ");

    for(int i = 0; i < n; i++)
            printf("%d ", arr[i]);

    return 0;
}
