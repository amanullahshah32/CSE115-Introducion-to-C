#include <stdio.h>

int main()
{
    int n, i, k, arr[50];

    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter %d unique element:\n", n);

    for(i = 0; i < n; i++)

    scanf("%d", &arr[i]);

    printf(" index to delete: ");
    scanf("%d", &k);

    if(k < 0 || k >= n)
    {
        printf("Invalid index\n");
    }

    for(i = k; i < n - 1; i++)
        arr[i] = arr[i + 1];
        n--;


    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
    {
         printf("%d ", arr[i]);
    }


      return 0;
}

