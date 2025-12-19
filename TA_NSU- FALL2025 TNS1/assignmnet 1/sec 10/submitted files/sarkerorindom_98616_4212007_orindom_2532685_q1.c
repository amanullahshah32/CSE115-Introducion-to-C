#include <stdio.h>

int main() {
    int arr[100];
    int n, i, k, val;

    printf("Enter array size : ");
    scanf("%d", &n);

    printf("Enter all unique integer elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    printf("\n Enter index k to modify  : ");
    scanf("%d", &k);
    printf("new value: ");
    scanf("%d", &val);
    if (k >= 0 && k < n) {
        arr[k] = val;
    } else {
        printf("Invalid index!\n");
        return 0;
    }

printf("modified index value: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

