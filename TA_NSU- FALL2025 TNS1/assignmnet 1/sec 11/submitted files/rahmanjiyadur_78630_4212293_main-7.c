#include <stdio.h>
#include <stdlib.h>

    /*
Write a C program with a function that will reverse the elements in an array of
integers.
    */

void RevArr(int arr[], int size) {
    int i = 0, j = size - 1, temp;

    while(i < j){
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

    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    RevArr(arr, n);

    printf("Reversed array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
