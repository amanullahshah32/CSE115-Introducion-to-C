#include <stdio.h>

int maxNum(int *p, int size) {

    int max = *p;

    for (int i = 1; i < size; i++) {

        if (*(p + i) > max) {
            max = *(p + i);
        }
    }
    return max;
}

int main() {
    int arr[] = {10, 60, 90, 40, 70};
    int size = 5;


    printf("Largest element: %d\n", maxNum(arr, size));
    return 0;
}
