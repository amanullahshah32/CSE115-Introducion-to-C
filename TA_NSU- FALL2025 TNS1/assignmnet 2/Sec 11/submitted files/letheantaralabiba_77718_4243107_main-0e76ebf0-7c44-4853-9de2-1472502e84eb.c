#include <stdio.h>

void rev_arr(int arr[], int n) {
    int temp;
    for(int i=0;i<n/2;i++) {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    rev_arr(arr,n);

    printf("Reversed array:\n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}
