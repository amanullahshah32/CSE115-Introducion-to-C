#include <stdio.h>

int main() {
    int n,i,j;
        printf("Enter the size : ");
        scanf("%d", &n);

    int arr[n];
        printf("Enter %d integers :\n", n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        printf("Unique elements are : ");

    for(i = 0; i < n; i++) {
    int count = 0;
        for( j = 0; j < n; j++)
            if(arr[i] == arr[j]) count++;
        if(count == 1)
        printf("%d ", arr[i]);
    }

    return 0;
}
