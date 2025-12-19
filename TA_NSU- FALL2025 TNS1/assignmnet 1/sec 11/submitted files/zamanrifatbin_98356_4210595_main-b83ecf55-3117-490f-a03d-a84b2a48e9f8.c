#include <stdio.h>
#include <stdlib.h>




 void RevArr(int arr[], int size) {
    int i = 0, j = size - 1, temp;
    while(i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++; j--;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

    RevArr(arr, n);

    for(int i = 0; i < n; i++)
    printf("%d ", arr[i]);
    return 0;
}

