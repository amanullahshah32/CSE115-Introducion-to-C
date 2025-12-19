#include <stdio.h>

int main()
{
    int arr[100], n, value;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter new element to insert: ");
    scanf("%d", &value);

    arr[n] = value;
    n++;

    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
