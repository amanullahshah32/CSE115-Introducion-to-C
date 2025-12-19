#include <stdio.h>

int max(int *p, int size) {
    int max = *p;
    for (int i = 1; i < size; i++) {
        if (*(p + i) > max)
            max = *(p + i);
    }
    return max;
}

int main() {
    int arr[] = {10, 25, 7, 40, 18};
    int size = 5;

    printf("Maximum element = %d\n", max(arr, size));
    return 0;
}
