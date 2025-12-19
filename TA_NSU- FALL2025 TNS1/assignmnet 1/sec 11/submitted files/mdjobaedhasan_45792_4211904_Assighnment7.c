
#include <stdio.h>

int main() {
    int n, count = 0,i,j;
        printf("Input the number of elements : ");
        scanf("%d", &n);

    int arr[n];
        printf(" Elements are : ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }

    printf("Total number of duplicate elements : %d", count);
    return 0;
}
