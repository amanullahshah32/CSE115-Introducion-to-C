#include <stdio.h>
int main()
{
    int r, c;
    printf("\n enter row:");
    scanf("%d", &r);
    printf("\n enter column:");
    scanf("%d", &c);
    int arr[r][c];
    printf("\n enter array elements:");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // sum of main diagonal element
    int sum = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
        }
    }
    printf("\nsum of main diagonal element: %d\n", sum);

    // sum of border elements
    int sum1 = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == 0 || i == r - 1 || j == 0 || j == c - 1)
            {
                sum1 += arr[i][j];
            }
        }
    }
    printf("\nsum of border elements: %d\n", sum1);

    // maximum row sum
    int maxrow = 0;
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxrow)
        {
            maxrow = sum;
        }
    }
    printf("\nmaximum row sum: %d\n", maxrow);

    // maximum column sum
    int maxcol = 0;
    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
        {
            int sum = 0;
            sum += arr[i][j];
        }

        if (sum > maxcol)
        {
            maxcol = sum;
        }
    }
    printf("\nmaximum column sum: %d\n", maxcol);

    // display upper right triangle
    printf("\nupper right triangle:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j >= i)
            {
                printf("%4d", arr[i][j]);
            }
            else
                printf("    ");
        }
        printf("\n");
    }

    // display lower right triangle
    printf("\nlower right triangle:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j >= c - 1 - i)
            {
                printf("%4d", arr[i][j]);
            }
            else
                printf("    ");
        }
        printf("\n");
    }

    return 0;
}