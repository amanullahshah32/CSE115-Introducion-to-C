// Property of Imtiaz 2512169

#include <stdio.h>

int main() 
{
    int i, k, newValue;
    int arr[5];
    printf("Enter 5 elements of the array: ");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the index to modify (0 to 4): ");
    scanf("%d", &k);
    
    printf("Enter the new value: ");
    scanf("%d", &newValue);
    
    for(i=0; i<5; i++)
    {
        if(i==k)
        {
            arr[i] = newValue;
        }
    }
    
    printf("New Array: ");
    for(int i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

// Property of Imtiaz 2512169
