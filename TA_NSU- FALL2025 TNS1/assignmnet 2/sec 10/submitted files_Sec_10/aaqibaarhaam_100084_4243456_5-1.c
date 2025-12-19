#include <stdio.h>
void display(int n,int arr[n][n])
{
    printf("\n\n\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%3d",arr[i][j]);
        printf("\n");
    }
    printf("\n\n");
}
void diagonalsum(int n,int arr[n][n])
{
    int sum=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(i==j)
                sum+=arr[i][j];
    printf("\n\nSum of main diagonal element: %d\n",sum);
}
void bordersum(int n,int arr[n][n])
{
    int sum=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(i==0||i==n-1||(j==0 && i!=0 && i!=n-1)||(j==n-1 && i!=0 && i!=n-1))
                sum+=arr[i][j];
    printf("\nSum of border elements: %d\n\n",sum);
}
void row_sum_and_max(int n,int arr[n][n])
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
            sum+=arr[i][j];
        printf("Row%d sum: %d\n",i,sum);
        if(sum>max)
            max=sum;
    }
    printf("Maximum row sum: %d\n\n",max);
}
void col_sum_and_max(int n,int arr[n][n])
{
    int max=0;
    for(int j=0;j<n;j++)
    {
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=arr[i][j];
        printf("Col%d sum: %d\n",j,sum);
        if(sum>max)
            max=sum;
    }
    printf("Maximum col sum: %d\n\n",max);
}
void display_upper_right_triangle(int n, int arr[n][n])
{
    printf("\n\nPrinting the upper right triangle:\n\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>i)
                printf("%3d",arr[i][j]);
            else
                printf("   ");
        }
        printf("\n");
    }
    printf("\n\n");
}
void display_lower_right_triangle(int n, int arr[n][n])
{
    printf("\n\nPrinting the lower right triangle:\n\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j<i)
                printf("%3d",arr[i][j]);
            else
                printf("   ");
        }
        printf("\n");
    }
    printf("\n\n");
}
int main()
{
    printf("Enter no. of rows/column: "); int n; scanf("%d",&n);
    int arr[n][n];

    for(int i=0; i<n; i++)
    {
        printf("\n\n\nEnter elements in row number %d:\n",i+1);
        for(int j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    }

    display(n,arr);
    diagonalsum(n,arr);
    bordersum(n,arr);
    row_sum_and_max(n,arr);
    col_sum_and_max(n,arr);
    display_upper_right_triangle(n,arr);
    display_lower_right_triangle(n,arr);
    //UPPER AND LOWER PART NOT GIVEN IN SAMPLE OUTPUT OF THE QUESTION
}
