#include <stdio.h>

int* rev_arr1(int arr[], int n) {
    static int rev[100];
    for(int i=0;i<n;i++)
        rev[i] = arr[n-i-1];
    return rev;
}

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int *r = rev_arr1(arr,n);

    printf("Reversed array:\n");
    for(int i=0;i<n;i++)
        printf("%d ",r[i]);

    return 0;
}
