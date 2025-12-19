#include <stdio.h>

int main() {
    int arr[100], n, temp;
    int *p = arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i <n; i++)
        scanf("%d", p + i);

    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j< n; j++){
            if (*(p + i)> *(p + j)){

                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }

    }

    printf("Sorted array:\n");
    for (int i = 0; i <n; i++)

        printf("%d ", *(p + i));

    return 0;
}
