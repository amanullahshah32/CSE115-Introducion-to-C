// Md. Rizuan Al Masud Raeen
// 2212398642
// Assignment 02
// Question 05

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int arr[n][n];
    printf("Enter elements:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int diag_sum = 0;
    for(int i=0; i<n; i++)
    {
        diag_sum += arr[i][i];
    }

    int border_sum = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==0 || j==0 || i==n-1 || j==n-1)
            {
                border_sum += arr[i][j];
            }
        }
    }

    int max_row_sum = 0;
    for(int i=0; i<n; i++)
    {
        int row_sum = 0;
        for(int j=0; j<n; j++)
        {
            row_sum+= arr[i][j];
        }
        if(i==0 || row_sum > max_row_sum)
            max_row_sum=row_sum;
    }

    int max_col_sum = 0;
    for(int j=0; j<n; j++)
    {
        int col_sum = 0;
        for(int i=0; i<n; i++)
        {
            col_sum +=arr[i][j];
        }
        if(j==0 || col_sum > max_col_sum)
            max_col_sum= col_sum;
    }

    printf("Sum of main diagonal element: %d\n", diag_sum);
    printf("Sum of border elements: %d\n", border_sum);

    for(int i=0; i<n; i++)
    {
        int sum = 0;
        for(int j=0; j<n; j++)
        {
            sum +=arr[i][j];
        }
        printf("Row%d sum: %d\n", i, sum);
    }

    printf("Maximum row sum: %d\n", max_row_sum);

    for(int j=0; j<n; j++)
    {
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            sum+= arr[i][j];
        }
        printf("Column%d sum: %d\n", j, sum);
    }

    printf("Maximum column sum: %d\n", max_col_sum);

    printf("Upper right triangle:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j >= i)
                printf("%d ", arr[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

    printf("Lower right triangle:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j >= i)
                printf("%d ", arr[j][i]);
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}


/* 5. Consider a 2D array, take input from the user. Then, find a) sum of main diagonal element, b)
sum of border elements, c) maximum row sum, d) maximum column sum, e)display upper right
triangle, f)display lower right triangle . Sample Input:
Consider the following 2D array: 13 3 4
5 6 7
10 8 9
Sample output:
Sum of main diagonal element: 28 (13+6+9)
Sum of border element: 59 (13+3+4+5+7+10+8+9)
Row0 sum: 20 (13+3+4)
Row1 sum:18 (5+6+7)
Row2 sum: 27 (10+8+9)
Maximum row sum: 27
Column0 sum: 28 (13+5+10)
Column1 sum: 17 (3+6+8)
Column2 sum: 20 (4+7+9)
Maximum column sum: 28
[NB: You need not display the elements that are being added (shown in first bracket in sample
output), just display the sum and maximum] */
