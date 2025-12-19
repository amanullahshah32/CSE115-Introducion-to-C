#include <stdio.h>
int max(int *p, int size)
{
    int i;
    printf("\nThe elements of the array are:\n");
    for (i=0; i<size; i++)
    {
        printf("%d ", *(p+i));
    }
    int largest=*p;
    for (i=0; i<size; i++)
    {
        if(*(p+i)>largest)
            largest=*(p+i);
    }
    printf("\nThe maximum number is:%d", largest);
}

int main()
{
    int n,i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max(arr, n);
    return 0;
}
