#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: \n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k, value;
    printf("Enter index to modify: ");
    scanf("%d", &k);
    printf("Enter new value: ");
    scanf("%d", &value);
    arr[k] = value;


    printf("Modified Array elements: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

