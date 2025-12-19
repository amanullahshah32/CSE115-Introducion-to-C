#include<stdio.h>
int main()
{
    int n, count=0;
    printf("Input the number of elements to be stored in array:");
    scanf("%d", &n);
    int array[n];
    printf("Input elements are:");
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
                count++;
                break;
            }
        }
    }
    printf("Total number of duplicate elements found in array:%d\n", count);
    return 0;
}
