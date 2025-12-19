#include<stdio.h>
void RevArr (int arr[],int size)
{
    int temp;
    for (int i=0;i<size/2;i++)
        {
            temp = arr[i];
            arr[i] = arr[size-i-1];
            arr[size-i-1] = temp;
        }
}
int main()
{
    int size;
    printf("Enter size of array");
    scanf("%d", &size);

    int arr[size];
    for(int i=0; i<size; i++)
        scanf("%d", &arr[i]);

    RevArr(arr,size);

    for(int i=0; i<size; i++)
        printf("%d ", arr[i]);
}
