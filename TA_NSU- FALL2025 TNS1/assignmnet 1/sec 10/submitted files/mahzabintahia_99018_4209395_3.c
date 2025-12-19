#include<stdio.h>
int main()
{
    int arr[50];
    int i, n, k, newVal;

    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("In which index do u want to insert? ");
    scanf("%d", &k);

    printf("Enter new value: ");
    scanf("%d", &newVal);

    if(k>=0 && k<n)
        for(i=n; i>k; i--)
            arr[i]=arr[i-1];
            arr[k]=newVal;
        n++;

    printf("\nModified array: ");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    return 0;
}

