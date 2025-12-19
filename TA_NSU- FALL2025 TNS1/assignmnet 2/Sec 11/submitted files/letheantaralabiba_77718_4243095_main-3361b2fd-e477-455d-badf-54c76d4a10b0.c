#include <stdio.h>

int findMax(int *p, int size) {
    int max = *p;
    for(int i = 1; i < size; i++) {
        if(*(p+i) > max)
            max = *(p+i);
    }
    return max;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);

    printf("Maximum element = %d\n", findMax(arr, n));
    return 0;
}
