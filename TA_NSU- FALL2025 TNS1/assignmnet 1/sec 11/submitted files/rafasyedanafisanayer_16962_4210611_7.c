#include <stdio.h>

int main() {
    int n, arr[100], count = 0;

    printf("Input the number of elements: ");
    scanf("%d", &n);

    printf("elements are:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }

    printf("Total number of duplicate elements are: %d\n", count);

    return 0;
}
