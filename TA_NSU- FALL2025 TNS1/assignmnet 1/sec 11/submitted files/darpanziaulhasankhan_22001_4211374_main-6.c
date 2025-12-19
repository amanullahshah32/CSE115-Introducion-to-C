#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Input number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Input elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
        }
    }

    printf("Total number of duplicate element found in array: %d",count);
}
