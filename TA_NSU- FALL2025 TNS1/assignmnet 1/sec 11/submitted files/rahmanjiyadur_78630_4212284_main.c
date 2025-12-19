#include <stdio.h>
#include <stdlib.h>

int main()
{

/*
Write a C program to modify an element in index k (value from user) in an array of all
unique integers
*/

    int n, k, NewValue;
    int arr[100];

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d unique integers:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter index k to modify: ");
    scanf("%d", &k);

    printf("Enter new value: ");
    scanf("%d", &NewValue);

    if(k >= 0 && k < n){
        arr[k] = NewValue;
    } else {
        printf("Invalid index.\n");
    }

    printf("Array after modification:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}
