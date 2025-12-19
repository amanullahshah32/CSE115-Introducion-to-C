#include <stdio.h>
int main()
{
    int n, dup=0;
    printf("Enter n:");
    scanf("%d", &n);

    int arr[n];
    printf("\nElements of the array are:\n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for(int i=0; i<n; i++)
    {
        int count=0;
        for(int j=0; j<n; j++)
        {
            if(arr[i]==arr[j])
                count++;
        }
        if(count > 1)
        {
            int foundBefore = 0;
            for(int k = 0; k < i; k++)
            {
                if(arr[k] == arr[i])
                    foundBefore = 1;
            }
            if(foundBefore == 0)
                dup++;
        }
    }
    printf("\nTotal duplicate elements = %d", dup);

    return 0;
}
