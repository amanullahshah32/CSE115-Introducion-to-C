//answer 2
#include <stdio.h>
#include <stdlib.h>

void sort(int *p, int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(*(p + j) < *(p + i)) {
                int temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int size = 5;

    sort(arr, size);

    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}
