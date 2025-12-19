#include <stdio.h>

int main()
{
    int n, i, k, value, arr[100];

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d unique elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf(" index to insert: ");
    scanf("%d", &k);

    if(k < 0 || k > n)
        {
        printf("Invalid index \n");
       }

    printf("Enter value to insert: ");
    scanf("%d", &value);

    for(i=n; i>k; i--)

    arr[i] = arr[i-1];
    arr[k] = value;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

