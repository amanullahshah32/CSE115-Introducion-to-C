#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *p = arr;
    int temp;

    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(*(p+i) > *(p+j))
            {
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }

    printf("Ascending order: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", *(p+i));
    }
    printf("\n");

    return 0;
}
