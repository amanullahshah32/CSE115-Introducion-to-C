#include <stdio.h>

void sort(int *p, int n) {
    int temp;
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(*(p+i) > *(p+j)) {
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    sort(arr,n);

    printf("Sorted array:\n");
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);

    return 0;
}
