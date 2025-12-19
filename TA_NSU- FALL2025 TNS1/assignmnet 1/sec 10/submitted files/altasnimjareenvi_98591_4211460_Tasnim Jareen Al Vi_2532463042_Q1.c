#include<stdio.h>
int main()
{
    int n, k, newvalue;
    printf("Enter the size of the elements:");
    scanf("%d", &n);
    int array[n];
    printf("Enter elements: ");
    for(int i=0; i<n ; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Which index to modify:");
    scanf("%d", &k);

    printf("Add new element to the specific index:");
    scanf("%d", &newvalue);

    array[k] = newvalue;

    printf("Array after modifying:");
    for(int i=0; i<n ; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
