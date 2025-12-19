#include<stdio.h>
int main()
{
    int n, k, newvalue;
    printf("Enter the size of the elements:");
    scanf("%d", &n);
    int array[n];
    for(int i=0; i<n ; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Which index to delete:");
    scanf("%d", &k);

    for(int i=k; i<n-1 ; i++)
    {
        array[i] = array[i+1];
    }
    n--;

    printf("Array after deleting an element:");
    for(int i=0; i<n ; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
