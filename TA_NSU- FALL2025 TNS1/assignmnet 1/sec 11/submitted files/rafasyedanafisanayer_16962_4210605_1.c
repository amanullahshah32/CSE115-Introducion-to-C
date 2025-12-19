#include <stdio.h>

int main() {
    int arr[100], n, k, val;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d unique integers:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                printf("duplicate\n");
                return 0;
            }
        }
    }

    printf("Enter index to modify: ");
    scanf("%d", &k);

    printf("Enter new value: ");
    scanf("%d", &val);

    arr[k] = val;

    printf("Updated array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

