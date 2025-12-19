#include<stdio.h>
int main()
{
    int arr[50];
    int i, n, k, modVal;

    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Which index do u want to modify? ");
    scanf("%d", &k);

    printf("Enter desired value: ");
    scanf("%d", &modVal);

    if(k>=0 && k<n)
        arr[k]= modVal;

    printf("\nModified array: ");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    return 0;
}
