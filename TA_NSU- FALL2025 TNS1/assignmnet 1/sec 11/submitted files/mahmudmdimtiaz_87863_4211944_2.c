// Property of Imtiaz 2512169

#include <stdio.h>

int main() 
{
    int i, k;
    int arr[5];
    printf("Enter 5 elements of the array: ");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the index to delete (0 to 4): ");
    scanf("%d", &k);
    
    for(i=k; i<5; i++)
    {
        {
            arr[i] = arr[i+1];
        }
    }
    
    printf("New Array: ");
    for(int i=0; i<5-1; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

// Property of Imtiaz 2512169
