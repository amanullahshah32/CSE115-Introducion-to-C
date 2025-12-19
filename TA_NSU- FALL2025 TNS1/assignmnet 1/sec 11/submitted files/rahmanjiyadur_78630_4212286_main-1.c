#include <stdio.h>
#include <stdlib.h>

int main()
{

/*
Write a C program to delete an element from index k (value from user) in an array of
all unique integers.
*/

    int n, k;
    int arr[100];

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d unique integers:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter index k to delete: ");
    scanf("%d", &k);

    if(k < 0 || k >= n){
        printf("Invalid index.\n");
        return 0;
    }

    for(int i = k; i < n; i++){
        arr[i] = arr[i+1];
    }

    printf("Array after deletion:\n");
    for(int i = 0; i < n-1; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
