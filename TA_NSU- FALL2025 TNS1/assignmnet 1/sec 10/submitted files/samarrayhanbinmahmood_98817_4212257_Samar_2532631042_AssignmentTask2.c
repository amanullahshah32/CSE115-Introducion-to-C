#include <stdio.h>

int main()
{
    int n, k;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d unique integers:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter index k: ");
    scanf("%d", &k);

    if(k < 0 || k >= n)
    {
        printf("Invalid index\n");
        return 0;
    }

    for(int i = k; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n=n-1;

    printf("Array after deletion:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
