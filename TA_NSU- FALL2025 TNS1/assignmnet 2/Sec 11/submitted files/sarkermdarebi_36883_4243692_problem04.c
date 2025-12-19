//using array
#include <stdio.h>

void rev_arr(int arr1[], int rev_arr1[], int size) {
    for (int i = 0; i < size; i++) {
        rev_arr1[i] = arr1[size - 1 - i];
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr1[n], rev_arr1[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    rev_arr(arr1, rev_arr1, n);

    for (int i = 0; i < n; i++)
        printf("%d ", rev_arr1[i]);

    return 0;
}


//using pointer
#include <stdio.h>

void rev_arr(int *arr1, int *rev_arr1, int size) {
    for (int i = 0; i < size; i++) {
        *(rev_arr1 + i) = *(arr1 + size - 1 - i);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr1[n], rev_arr1[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    rev_arr(arr1, rev_arr1, n);

    for (int i = 0; i < n; i++)
        printf("%d ", rev_arr1[i]);

    return 0;
}

