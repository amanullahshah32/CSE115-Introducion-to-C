#include <stdio.h>
#include <stdlib.h>

int main()
{

/*
Write a C program to insert an element in index k (value from user) in an array of all
unique integers.
*/

    int n, k, value;
    int arr[100];

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d unique integers:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter index k to insert: ");
    scanf("%d", &k);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    if(k < 0 || k > n){
        printf("Invalid index.\n");
        return 0;
    }

    for(int i = n; i > k; i--){
        arr[i] = arr[i-1];
    }

    arr[k] = value;

    printf("Array after insertion:\n");
    for(int i = 0; i < n+1; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
