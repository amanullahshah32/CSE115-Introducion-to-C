#include<stdio.h>
void RevArr( int arr[], int size)
{
    int temp[100], i, j=0;
    for(i=size-1; i>=0; i--)
    {
        temp[j]= arr[i];
        j++;
    }
    for(i=0; i<size; i++)
    {
        arr[i]= temp[i];
    }
}

int main()
{
    int n, arr[100],i;
    printf("enter array size: ");
    scanf("%d", &n);
    printf("enter array: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    RevArr(arr, n);

    printf("Reversed array: ");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);

}
