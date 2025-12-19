#include<stdio.h>
int main()
{
    int i,j,n;

    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array: ");
    printf("\n");

    for(i=0; i<n; i++)
    {
        printf("array[%d]=",i);
        scanf("%d", &arr[i]);

    }

    for(i=0; i<n; i++)
    {
        int isFound=0;
        for(j=0; j<n; j++)
            if(arr[i]==arr[j] && i!=j)
                isFound=1;
        if(isFound==0)
            printf("%d ",arr[i]);
    }

    return 0;
}
