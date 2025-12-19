#include<stdio.h>
int main()
{
    int i,j,n,count=0;

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

        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("Number of duplicate elements: %d ",count);

    return 0;
}
