#include <stdio.h>

int main() {
    int arr[5] = {5, 2, 9, 1, 6};
    int *p = arr;

    for(int i = 0; i < 5; i++) {
        for(int j = i + 1; j < 5; j++) {
            if(*(p + i) > *(p + j)) {
                int temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}

