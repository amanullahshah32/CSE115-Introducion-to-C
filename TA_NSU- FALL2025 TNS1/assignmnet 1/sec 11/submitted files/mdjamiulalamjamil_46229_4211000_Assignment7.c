#include <stdio.h>

int main() {
    int arr[100], n, count, duplicates = 0;
    int checked[100] = {0};

    printf("Input the number of elements to be stored in array: ");
    scanf("%d", &n);

    printf("Input elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        if(checked[i] == 0) {
            count = 1;
            for(int j = i+1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    checked[j] = 1;
                }
            }
            if(count > 1) {
                duplicates += (count - 1);
            }
        }
    }

    printf("Total number of duplicate element found in array: %d\n", duplicates);

    return 0;
}
