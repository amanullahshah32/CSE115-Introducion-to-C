#include <stdio.h>

int max(int *p, int size) {

    int largest = *p;
    for (int i = 1; i < size; i++)
    {
        if (*(p + i) > largest) {
            largest = *(p + i);
        }
    }

    return largest;
}

int main() {
    int arr[] = {5, 2, 9, 1, 7, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = max(arr, size);
    printf("Largest element is: %d\n", result);

    return 0;
}
