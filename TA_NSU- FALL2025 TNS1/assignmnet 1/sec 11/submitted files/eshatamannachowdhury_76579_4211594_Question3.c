#include<stdio.h>

int main()
{
    int n, k, value;
    printf("Enter the number of array elements:");
    scanf("%d",&n);
    int arr[100];

    printf("Enter %d unique elemens:  ",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("Error: Duplicate value entered\n");
                return 0;
            }
        }
    }
    printf("Enter index number : ");
    scanf("%d",&k);
    printf("Enter new value : ");
    scanf("%d",&value);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            printf("Error: Value already exists in the array. Cannot insert.\n");
            return 0;
        }
    }
    if(k < 0 || k > n)
    {
        printf("Invalid index number ");
        return 0;
    }


        for(int i = n ; i>k; i--)
        {


                arr[i]=arr[i-1];

        }
        arr[k] = value;
        n++;


    printf("\nThe new list is : ");
    for(int i=0; i<n; i++)
    {
        printf(" %d",arr[i]);
    }



}
