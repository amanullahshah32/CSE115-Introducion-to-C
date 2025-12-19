#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, x, n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d unique elements:\n " ,n);
    for(int i = 0; i<n; i++)
        {
        scanf("%d", &arr[i]);
        }



        printf("Enter the index you want to delete: ");
        scanf("%d", &x);

        for (int i= x; i <n-1; i++)
        {
            arr[i]=arr[i+1];

        }

        printf("New Array is:\n");
        for(int i = 0 ;i<n-1; i++)
        {
            printf("%d ", arr[i]);
        }






    return 0;
}
