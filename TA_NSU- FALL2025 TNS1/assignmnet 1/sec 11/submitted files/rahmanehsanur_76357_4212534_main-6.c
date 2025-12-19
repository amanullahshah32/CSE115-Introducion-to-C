#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x;

    printf("Input the number of elements to be stored in array: ");
    scanf("%d",&x);

    int arr[x];

    printf("Input elements are: ");
    for (int i = 0;i < x;i++)
        {
        scanf("%d",&arr[i]);
        }

    int duplicateCount = 0;

    for (int i = 0;i < x;i++) {
        int count = 1;


        int alreadyCounted = 0;
        for (int k = 0;k < i;k++)
        {
            if (arr[i]==arr[k])
        {
            alreadyCounted = 1;
            break;
        }
        }
        if (alreadyCounted)
            continue;


        for (int j = i + 1; j < x; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > 1)
            {
            duplicateCount++;
            }
    }

    printf("Total number of duplicate element found in array: %d\n", duplicateCount);




    return 0;
}
