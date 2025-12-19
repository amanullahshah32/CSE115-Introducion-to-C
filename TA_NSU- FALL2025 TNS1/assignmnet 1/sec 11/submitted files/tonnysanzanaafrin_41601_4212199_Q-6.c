//Sanzana Afrin Tonny
//2231370042


#include <stdio.h>

int main() {
    int n, i, j, count;
    int unique = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];


    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nUnique elements in the array are: ");


    for (i = 0; i < n; i++) {
        count = 0;

        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count == 1) {
            printf("%d ", arr[i]);
            unique = 1;
        }
    }


    if (unique == 0) {
        printf("None");
    }



    return 0;
}

