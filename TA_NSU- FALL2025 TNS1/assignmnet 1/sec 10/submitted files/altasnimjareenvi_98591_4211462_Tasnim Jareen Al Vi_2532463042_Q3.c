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
    printf("Which index to insert:");
    scanf("%d", &k);

    printf("Add new value to the specific index:");
    scanf("%d", &newvalue);

     for(int i=n; i>k ; i--)
    {
        array[i] = array[i-1];
    }
    array[k] = newvalue;
    n++;

    printf("Array after modifying:");
    for(int i=0; i<n ; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
