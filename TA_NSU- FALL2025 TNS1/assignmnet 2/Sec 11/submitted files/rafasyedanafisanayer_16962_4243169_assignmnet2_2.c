
#include <stdio.h>

int main() {
    int arr[100], n;
    int *p = arr;
    int temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    for(int i = 0; i < n - 1; i++)  //ascending order
        for(int j = i + 1; j < n; j++) {
            if(*(p + i) > *(p + j)) {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    printf("Array in ascending order:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}
