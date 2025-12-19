#include<stdio.h>
int ascendingOrder(int *p, int n)
{
    int temp,i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(p+i)>*(p+j))
            {
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    return;
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

    ascendingOrder(arr, n);

    printf("Array in ascending order:\n");
    for (i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

