#include <stdio.h>

int main() {
    int n, k, newValue;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d nnumbers  unique integers\n", n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter index k to modify ");
    scanf("%d", &k);

    if(k < 0 || k >= n) {

       printf("Invalid index\n");

    }

    printf("Enter new value");
    scanf("%d", &newValue);

    arr[k] = newValue;

    printf("Array after modification\n");

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
