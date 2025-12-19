#include <stdio.h>

void rev_arr(int *arr1, int *rev_arr1, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        *(rev_arr1 + i) = *(arr1 + size - 1 - i);
    }
}

int main()
{
    int a1[100], rev_a1[100];
    int num, i;

    printf("Enter size of array");
    scanf("%d", &num);

    printf("Enter elements");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a1[i]);
    }

    rev_arr(a1, rev_a1, num);

    printf("Reversed array\n");
    for (i = 0; i < num; i++)
    {
        printf("%d ", rev_a1[i]);
    }

    return 0;
}