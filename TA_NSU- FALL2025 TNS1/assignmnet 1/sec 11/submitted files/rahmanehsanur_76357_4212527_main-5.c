#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j,n, count ;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ", n);
    for(int i= 0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The unique elements are: ");
     for (int i = 0; i<n; i++)
    {
     int count = 0;


    for(int j = 0; j < n; j++)
    {
    if(arr[i] == arr[j])
    {
    count++;
    }
    }

    if(count == 1)
    {
    printf("%d ", arr[i]);
    }

    }
    return 0;
}
