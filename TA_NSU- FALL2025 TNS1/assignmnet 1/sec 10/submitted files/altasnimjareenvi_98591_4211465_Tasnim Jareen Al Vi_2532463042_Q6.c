#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the elements:");
    scanf("%d", &n);
    int array[n];
    printf("Enter elements:");
    for(int i=0; i<n ; i++)
    {
        scanf("%d", &array[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n ;j++)
        {
            if(array[i]==array[j])
            {
                for(int k=j; k<n-1; k++)
                {
                    array[k]=array[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("Array with all unique elements:");
    for(int i=0; i<n ; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
