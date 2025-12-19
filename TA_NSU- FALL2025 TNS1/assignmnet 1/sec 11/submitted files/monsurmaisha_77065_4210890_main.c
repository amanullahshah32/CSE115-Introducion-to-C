#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k,newvalue;
    printf("Enter array size:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d unique numbers:",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter index to modify:");
    scanf("%d",&k);

    printf("Enter new value:");
    scanf("%d",&newvalue);

    arr[k] = newvalue;

    printf("Array after modifying:");
    for(int i=0; i<n; i++)
        printf("%d",arr[i]);
    return 0;
}
