#include <stdio.h>

int main() {
    int n, i, j, count;
    int arr[100];

    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements are: ");

    for (i = 0; i < n; i++) {
        count = 0;
    
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
 
        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    return 0;
}
