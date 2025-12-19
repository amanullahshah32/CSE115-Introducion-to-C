#include <stdio.h>
#include <stdlib.h>

/*3) Write a C program to insert an element in index k (value from user) in an array of all
unique integers. */


int main()
{
   int n, x, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[30];

    printf("Enter unique integers:\n", n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter index to insert at (0 to %d): ", n);
    scanf("%d", &x);

    printf("Enter value to insert: ");
    scanf("%d", &value);


    for(int i = n; i > x; i--) {
        arr[i] = arr[i-1];
    }

    arr[x] = value;
    n++;

    printf("Array after insertion: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}
