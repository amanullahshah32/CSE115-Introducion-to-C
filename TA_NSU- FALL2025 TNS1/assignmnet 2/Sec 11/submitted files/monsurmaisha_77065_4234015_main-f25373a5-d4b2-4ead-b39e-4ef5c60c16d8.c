//answer 1
#include <stdio.h>

int max(int *p, int size) {
    int largest = p[0];
    for(int i = 1; i < size; i++) {
        if(*(p + i) > largest) {
            largest = *(p + i);
        }
    }
    return largest;
}

int main() {
    int arr[] = {5, 9, 2, 11, 6};
    int size = 5;

    printf("Max: %d\n", max(arr, size));
    return 0;
}
