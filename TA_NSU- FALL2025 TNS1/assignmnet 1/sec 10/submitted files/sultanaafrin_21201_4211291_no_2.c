#include <stdio.h>

int main()
{
    int arr [100] = {1, 2, 3, 4, 5};
    int n = 5;
    int k;

    printf("Array before deletion: ");
    for(int i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");

    printf("Enter index k to delete (0 to %d): ",n-1);
    scanf("%d", &k);

    //Updated array
    if(k >= 0 && k<n){
        //shift elements r -> l
        for(int i=k; i<n-1; i++)
        {
            arr[i] = arr[i+1];
        }
        n--;
        printf("\nArray after deletion: ");
        for(int i=0; i<n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else {
        printf("Invalid index.");
    }
    return 0;
}
