
//Sanzana Afrin Tonny
//2231370042


#include <stdio.h>

int main() {
    int n, i, j, count = 0;


    printf("enter array size: ");
    scanf("%d", &n);

    int arr[n];


    printf("elements are: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;
        }
    }


    }
    printf("Total number of duplicate element found in array: %d\n", count);

    return 0;
}
