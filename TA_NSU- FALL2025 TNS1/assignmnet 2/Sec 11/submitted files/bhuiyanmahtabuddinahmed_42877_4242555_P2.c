#include <stdio.h>

void up(int *p, int n)
{
    int *a, *b;
    int MA;

    for(a = p; a < p + n - 1; a++)
    {
        for(b = a + 1; b < p + n; b++)
        {
            if(*a > *b)
            {
                MA = *a;
                *a = *b;
                *b = MA;
            }
        }
    }
}

int main()
{
    int n;

    printf("Enter array size");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    up(arr, n);

    printf("Ascending order\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
