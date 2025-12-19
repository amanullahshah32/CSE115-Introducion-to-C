#include <stdio.h>
void revarr(int arr[], int n)
{
    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("array after reversing:");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    revarr(arr, n);
    return 0;
}