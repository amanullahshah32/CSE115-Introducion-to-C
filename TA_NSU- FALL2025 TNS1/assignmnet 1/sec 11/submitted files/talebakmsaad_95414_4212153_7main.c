#include <stdio.h>

int main() {
    int arr[100], n, i, j, count, duplicate = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    scanf("%d", &arr[i]);

    for(i = 0; i < n; i++) {
        count = 0;

        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }
        if(count > 1)

            duplicate++;
    }

    duplicate /= 2;

    printf("Total number of duplicate element: %d\n", duplicate);


    return 0;
}

