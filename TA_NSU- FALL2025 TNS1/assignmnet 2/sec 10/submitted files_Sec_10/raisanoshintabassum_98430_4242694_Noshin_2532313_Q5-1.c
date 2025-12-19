#include<stdio.h>
int main()
{
    int n,i,j,sum=0,sum1=0,sum2=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&arr[i][j]);

    }
    printf("Sum of main diagonal elements=");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if(i==j)
            sum=sum+arr[i][j];

    }
    printf("%d",sum);
    printf("\nSum of boarder elements=");
    sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)

            if(i==0||j==0|i==n-1|j==n-1)
            sum=sum+arr[i][j];
    }
    printf("%d",sum);
    printf("\nSum of Row0=");
     sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)

            if(i==0)
            sum=sum+arr[i][j];
    }
    printf("%d",sum);
    printf("\nSum of Row1=");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)

            if(i==1)
            sum1=sum1+arr[i][j];
    }
    printf("%d",sum1);
    printf("\nSum of Row2=");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)

            if(i==2)
            sum2=sum2+arr[i][j];
    }
    printf("%d",sum2);
        if(sum>sum1&&sum>sum2)
        {
        printf("\nMaximum row sum:%d",sum);
        }
        else if(sum1>sum2)
        {
         printf("\nMaximum row sum:%d",sum1);
        }
        else
        {
          printf("\nMaximum row sum:%d",sum2);
        }

        printf("\nSum of Column0=");
     sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)

            if(j==0)
            sum=sum+arr[i][j];
    }
    printf("%d",sum);
    printf("\nSum of Column1=");
    sum1=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)

            if(j==1)
            sum1=sum1+arr[i][j];
    }
    printf("%d",sum1);
    printf("\nSum of Column2=");
    sum2=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)

            if(j==2)
            sum2=sum2+arr[i][j];
    }
    printf("%d",sum2);
        if(sum>sum1&&sum>sum2)
        {
        printf("\nMaximum column sum:%d",sum);
        }
        else if(sum1>sum2)
        {
         printf("\nMaximum column sum:%d",sum1);
        }
        else
        {
          printf("\nMaximum column sum:%d",sum2);
        }
        return 0;
}
