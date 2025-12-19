//Sanzana Afrin Tonny
//2231370042
//section 11

#include <stdio.h>

int max(int *p, int size) {
    int mx_value = *p;
    for (int i = 1; i < size; i++) {
        if (*(p + i) > mx_value) {
            mx_value = *(p + i);
        }
    }
    return mx_value;
}

int main() {
    int arr[] = {67,90,3,24,21};
    int n = 5;
    printf("largest element: %d", max(arr, n));

}
