#include <stdio.h>
#include <stdlib.h>

//8) Write a C program with a function that will reverse the elements in an array of integers. Function Prototype: void RevArr ( int arr[], int size);

void RevArr(int arr[], int size);

int main() {
    int n, i;
    int arr[100];

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
    }

    RevArr(arr, n);

    printf("Reversed array: ");
    for(i = 0; i < n; i++)
    {
      printf("%d ", arr[i]);
    }

    return 0;
}

void RevArr(int arr[], int size)
{
    int temp, i;
    for(i = 0; i < size / 2; i++)
    {
      temp = arr[i];
      arr[i] = arr[size - 1 - i];
      arr[size - 1 - i] = temp;
    }
}
