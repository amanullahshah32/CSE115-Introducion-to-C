#include<stdio.h>
int main()
{
    int X[100];
    int i, n, newVal;

    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for(i=0; i<n; i++)
        scanf("%d", &X[i]);

    printf("Enter new value: ");
    scanf("%d", &newVal);

    X[n]=newVal;
    n++;

    printf("\nModified array: ");
    for(i=0; i<n; i++)
        printf("%d ", X[i]);
    return 0;
}


