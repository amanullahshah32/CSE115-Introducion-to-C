#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, duplicate = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);


    for(int i = 0; i < n; i++)
        {
            int count = 1;

            for(int j = i+1; j < n; j++)
                {
                   if(arr[i] == arr[j]) count++;
                }

           if(count > 1) duplicate++;
    }

    printf(" Total number of duplicate element found in array: %d\n", duplicate);
    return 0;
}
