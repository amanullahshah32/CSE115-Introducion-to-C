#include<stdio.h>

int main()
{
    int n, k ;
    printf("Enter the number of array elements: ");
    scanf("%d",&n);
    int arr[100];

    printf("Enter %d unique elemens: \n ",n);
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

    printf("Enter index number  : ");
    scanf("%d",&k);
    if(k < 0 || k > n)
    {
        printf("Invalid index number ");
    }
    else
    {
        int i = 0;
        while (i != k - 1)
            i++;

        while (i < n)
        {
            arr[i] = arr[i + 1];
            i++;
        }
        n--;
        printf("\nThe new list is : ");
        for( i=0; i<n; i++)
        {
            printf(" %d",arr[i]);
        }



    }

}
