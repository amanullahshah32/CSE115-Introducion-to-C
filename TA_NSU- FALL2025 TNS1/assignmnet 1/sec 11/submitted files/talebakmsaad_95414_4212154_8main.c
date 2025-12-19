#include <stdio.h>

void RevArr(int arr[], int size) {
    int i, temp;

    for(i = 0; i < size / 2; i++) {
        temp = arr[i];

        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {

    int arr[100], n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++)
    scanf("%d", &arr[i]);

    RevArr(arr, n);

    printf("Reversed array:\n");
    for(i = 0; i < n; i++)

        printf("%d ", arr[i]);

    return 0;

}
