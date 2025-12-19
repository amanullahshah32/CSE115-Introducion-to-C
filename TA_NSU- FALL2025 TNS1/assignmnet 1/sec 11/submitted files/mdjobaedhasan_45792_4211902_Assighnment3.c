
#include <stdio.h>

int main() {
    int n, k, value,i;
        printf("Enter array size : ");
        scanf("%d", &n);
    int arr[n+1];
        printf("Enter %d unique integers :\n", n);

    for( i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        printf("Enter index to insert : ");
        scanf("%d", &k);

        printf("Enter the value : ");
        scanf("%d", &value);

    for(i = n; i > k; i--)
        arr[i] = arr[i-1];
        arr[k] = value;
        printf(" After insertion : ");

    for( i = 0; i <= n; i++)
        printf("%d ", arr[i]);

    return 0;
}
