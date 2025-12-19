#include <stdio.h>

int main(void)
{
    int arr[100], n, i, j, k, count, dupCount = 0, isFirst;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        // check if this value appeared before
        isFirst = 1;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                isFirst = 0;
        if (!isFirst)
            continue;   // already counted before

        // count occurrences of arr[i]
        count = 0;
        for (k = 0; k < n; k++)
            if (arr[i] == arr[k])
                count++;

        if (count > 1)
            dupCount++;
    }

    printf("Total number of duplicate element found in array: %d\n", dupCount);

    return 0;
}

