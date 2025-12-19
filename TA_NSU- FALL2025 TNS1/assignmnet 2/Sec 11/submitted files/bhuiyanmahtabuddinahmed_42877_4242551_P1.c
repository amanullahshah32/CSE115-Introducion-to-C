#include <stdio.h>

int mx(int *p, int size)
{
    int MA = *p;
    while(size > 1)
    {
        p++;
        if(*p > MA)
            MA = *p;
        size--;
    }
    return MA;
}

int main()
{
    int n;
    printf("Enter size ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d\n", mx(arr, n));

    return 0;
}

