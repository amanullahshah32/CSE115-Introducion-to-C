#include <stdio.h>

int main() {
    int n, i, k, newNum;
    int arr[100];

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d unique elements: \n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter index to modify: ");
    scanf("%d", &k);

    if(k < 0 || k >= n)
        {
        printf("Invalid Index!\n");
        }

    printf("Enter new value: ");
    scanf("%d", &newNum);

    arr[k] = newNum;

    printf("Array after modification: \n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

