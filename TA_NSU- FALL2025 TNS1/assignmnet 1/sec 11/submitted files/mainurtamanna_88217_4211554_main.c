#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    int n, k, newValue;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d unique numbers: ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter index to modify: ");
    scanf("%d", &k);

    printf("Enter new value: ");
    scanf("%d", &newValue);

    arr[k] = newValue;

    printf("Array after modifying: ");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);

     return 0;
}
