// Property of Imtiaz 2512169

#include <stdio.h>

int main()
{
	int n, dsum=0, bsum=0, mrsum=0, mcsum=0;
	printf("Enter N: ");
	scanf("%d", &n);
	int arr[n][n];
	
	printf("Enter the elements of the 2D array: ");
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i==j)
			{
				dsum = dsum + arr[i][j];
			}
		}
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i==0||i==n-1||j==0||j==n-1)
			{
				bsum = bsum + arr[i][j];
			}
		}
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i==n-1)
			{
				mrsum = mrsum + arr[i][j];
			}
		}
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(j==n-1)
			{
				mcsum = mcsum + arr[i][j];
			}
		}
	}
	
	printf("\nSum of the diagonal elements: %d\n", dsum);
	printf("Sum of the border elements: %d\n", bsum);
	printf("Sum of the maximum row elements: %d\n", mrsum);
	printf("Sum of the maximum column elements: %d\n", mcsum);
	
	printf("\nUpper right triangle elements:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf("  ");
        }
        
        for(int j=i; j<n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
	
	printf("\n");
	
	printf("\nUpper Left triangle elements:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
	
	printf("\n");
	
	return 0;
}

// Property of Imtiaz 2512169
