#include <stdio.h>

void RevArr(int arr[], int size) {
    int i, j, temp;
    i = 0;
    j = size - 1;

    while(i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int n, arr[100];

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    RevArr(arr, n);

    printf("Reversed array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
