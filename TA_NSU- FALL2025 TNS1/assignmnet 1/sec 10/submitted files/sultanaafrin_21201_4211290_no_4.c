#include <stdio.h>

int main()
{
    int arr[100], n, i, newValue;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter integers: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter new element to append: ");
    scanf("%d", &newValue);

    arr[n] = newValue;
    n++;

    printf("Final array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
