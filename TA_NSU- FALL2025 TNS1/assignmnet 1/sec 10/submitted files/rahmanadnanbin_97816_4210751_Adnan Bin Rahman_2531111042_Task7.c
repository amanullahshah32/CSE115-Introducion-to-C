#include <stdio.h>
int main() {
    int n, i, j;
    printf("Input the number of elements to be stored in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Input elements are: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    int visited[n];
    for(i = 0; i < n; i++) {
        visited[i] = 0;
    }
    for(i = 0; i < n; i++) {
        if(visited[i] == 1)
            continue;

        int freq = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                freq++;
                visited[j] = 1;
            }
        }

        if(freq > 1)
            count++;
    }

    printf("Total number of duplicate element found in array: %d\n", count);

    return 0;
}
