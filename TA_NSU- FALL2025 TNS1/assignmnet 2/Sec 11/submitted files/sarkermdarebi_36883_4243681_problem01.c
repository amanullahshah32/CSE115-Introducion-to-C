#include <stdio.h>

int max(int *p, int size) {
    int m = *p;
    for(int i = 1; i < size; i++) {
        if(*(p + i) > m)
            m = *(p + i);
    }
    return m;
}

int main() {
    int arr[] = {5, 9, 2, 7, 3};
    int size = 5;

    printf("Maximum = %d\n", max(arr, size));
    return 0;
}

