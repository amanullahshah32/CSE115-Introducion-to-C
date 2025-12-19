#include<stdio.h>
void RevArr(int arr[], int size)
{
    int start =0,end =size-1, temp;
    while(start<end)
    {
        temp= arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printf("Array after reversing:");
    for(int i=0; i<size ; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n;
    printf("Enter the size of the elements:");
    scanf("%d", &n);
    int array[n];
    printf("Enter elements:");
    for(int i=0; i<n ; i++)
    {
        scanf("%d", &array[i]);
    }
    RevArr(array, n);
    return 0;
}
