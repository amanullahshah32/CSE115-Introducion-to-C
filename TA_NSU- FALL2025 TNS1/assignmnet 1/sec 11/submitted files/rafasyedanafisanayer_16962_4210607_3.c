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
                printf("Duplicate value.\n");
                return 0;
            }
        }
    }

    printf("Enter index to insert at: ");
    scanf("%d", &k);

    if(k < 0 || k > n) {
        printf("Invalid index\n");
        return 0;
    }

    printf("Enter value to insert: ");
    scanf("%d", &val);

    for(int i = 0; i < n; i++) {
        if(val == arr[i]) {
            printf("Duplicate value.\n");
            return 0;
        }
    }

    for(int i = n; i > k; i--) {
        arr[i] = arr[i - 1];
    }

    arr[k] = val;
    n++;

    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
