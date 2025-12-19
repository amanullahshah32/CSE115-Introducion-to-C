// Property of Imtiaz 2512169

#include <stdio.h>

int main()
{
    int i, n, newValue;
    int X[100];
    
    printf("Enter the number of elements to populate: ");
    scanf("%d", &n);
    
    printf("Enter elements of the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &X[i]);
    }
    
    printf("Array: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", X[i]);
    }
    
    printf("\nEnter the new element to add at the end: ");
    scanf("%d", &newValue);
    
    X[n] = newValue;
    n++;

    printf("New Array: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", X[i]);
    }

    return 0;
}

// Property of Imtiaz 2512169
