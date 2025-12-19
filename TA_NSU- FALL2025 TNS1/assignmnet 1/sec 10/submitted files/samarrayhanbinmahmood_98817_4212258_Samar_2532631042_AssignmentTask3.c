#include <stdio.h>

int main()
{
    int x, y, ins;
    printf("Enter array size: ");
    scanf("%d", &x);

    int arr[100];
    printf("Enter %d unique integers:\n", x);
    for(int i = 0; i < x; i++)
        scanf("%d", &arr[i]);

    printf("Enter index k: ");
    scanf("%d", &y);

    if(y < 0 || y > x)
    {
        printf("Invalid index\n");
        return 0;
    }

    printf("Enter value to insert: ");
    scanf("%d", &ins);

    for(int i = x; i > y; i--)
        arr[i] = arr[i - 1];

    arr[y] = ins;
    x++;

    printf("Array after insertion:\n");
    for(int i = 0; i < x; i++)
        printf("%d ", arr[i]);

    return 0;
}
