#include <stdio.h>

int main() {
    int n, k, val;
    printf("Enter size: ");
    scanf("%d",&n);

    int arr[n+1];
    printf("Enter %d unique integers:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter index to insert: ");
    scanf("%d",&k);

    if(k<0 || k>n){
        printf("Invalid index!\n");
        return 0;
    }

    printf("Enter value: ");
    scanf("%d",&val);

    for(int i=n;i>k;i--)
        arr[i] = arr[i-1];

    arr[k] = val;
    n++;

    printf("Array after insertion: ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
