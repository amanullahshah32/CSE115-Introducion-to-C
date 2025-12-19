// Property of Imtiaz 2512169

#include <stdio.h>

int main()
{
    int i,j;
    int arr[5];
    printf("Enter 5 elements of the array: ");
    for(int i=0;  i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<5; i++)
    {
        int c=0;
        for(int j=0; j<5; j++)
        {
            if(arr[i]==arr[j])
            {    
                c++;
            }
        }
        
        if(c==1)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

// Property of Imtiaz 2512169


