#include<stdio.h>
int main()
{
    int arr[50];
    int i, n, k;

    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("In which index do u want to delete? ");
    scanf("%d", &k);

    if(k>=0 && k<n)
        for(i=k; i<n-1; i++)
            arr[i]=arr[i+1];
        n--;

    printf("\nModified array: ");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    return 0;
}


