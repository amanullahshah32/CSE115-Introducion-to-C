// Property of Imtiaz 2512169

#include <stdio.h>

int main() 
{
    int i, k, newValue;
    int arr[5];
    printf("Enter 4 elements of the array: ");
    for(int i=0; i<4; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the index to add (0 to 4): ");
    scanf("%d", &k);
    
    printf("Enter the value of that index: ");
    scanf("%d", &newValue);
    
    for(i=4; i>k; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[k] = newValue;
    
    printf("New Array: ");
    for(int i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

// Property of Imtiaz 2512169
