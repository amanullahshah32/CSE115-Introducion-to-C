#include <stdio.h>

int main() {
    int n;
    printf("Input the number of elements to be stored in array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Input elements are: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int visited[n];
    for (int i = 0; i < n; i++) visited[i] = 0;

    int dup_count = 0;
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
                visited[j] = 1;
            }
        }
        if (count > 1) dup_count++;
    }

    printf("Total number of duplicate element found in array: %d\n", dup_count);
    return 0;
}
