//Sanzana Afrin Tonny
//2231370042
//section 11

#include <stdio.h>

void sort_array(int *p, int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {

            if (*(p + j) > *(p + j + 1)) {

                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {67,90,3,24,21};
    int n = 5;

    sort_array(arr, n);

    printf("Sorted array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

}
