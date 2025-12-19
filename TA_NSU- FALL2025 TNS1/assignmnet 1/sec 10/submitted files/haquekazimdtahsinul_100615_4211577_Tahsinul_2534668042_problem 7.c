#include <stdio.h>
int main() {
    int arr[100], n, i, j, count, duplicateCount = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        count = 0;
        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }
        if(count > 1) {
            duplicateCount++;
        }
    }
    duplicateCount /=  count;
    return 0;
}
