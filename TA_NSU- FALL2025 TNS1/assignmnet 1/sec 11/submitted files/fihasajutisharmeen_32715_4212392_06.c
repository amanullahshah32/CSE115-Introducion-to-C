#include <stdio.h>
#include <stdlib.h>

//6) Write a C program to display all unique elements (elements that occur only once) in an array of integers.

int main() {
    int n, i, j, count;
    int arr[100];

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements are: ");

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }

        if(count == 1)
        {
             printf("%d ", arr[i]);
        }

    }

    return 0;
}
