#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, x, n, NewNumber;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d unique elements: " ,n);
    for(int i = 0; i<n; i++)
        {
        scanf("%d", &arr[i]);
        }

    printf("Enter the index you want to modify: ");
    scanf("%d", &x);

    printf("Enter the New Value");
    scanf("%d", &NewNumber);

    arr[x] = NewNumber;

    printf("The new array is: ");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d", arr[i]);
    }



    return 0;
}
