
#include <stdio.h>

int main() {
    int n, k, newVal;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d unique integers:\n", n);

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter index to modify: ");
    scanf("%d",&k);

    if(k<0 || k>=n){
        printf("Invalid index!\n");
        return 0;
    }

    printf("Enter new value: ");
    scanf("%d",&newVal);

    arr[k] = newVal;

    printf("Modified array: ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
