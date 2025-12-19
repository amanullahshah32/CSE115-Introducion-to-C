#include <stdio.h>

int main() {
    int n, arr[100], count = 0;

    printf("Input the number of elements to be stored in array: ");
    scanf("%d", &n);

    printf("Input elements are:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        int freq = 1;
        if(arr[i] == -99999) continue;

        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                freq++;
                arr[j] = -99999;
            }
        }
        if(freq > 1)
            count++;
    }

    printf("Total number of duplicate element found in array: %d", count);

    return 0;
}
