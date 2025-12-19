#include <stdio.h>
void RevArr(int arr[], int size)
{
    int i, j, temp;
    i = 0;
    j = size - 1;
    while(i < j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    printf("The elements of the array is:\n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    RevArr(arr, n);

    printf("\nThe reversed array is:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
