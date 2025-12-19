#include <stdio.h>

int main()
{
    int arr [100] = {1, 2, 3, 4, 5};
    int n = 5;
    int k, newValue;

    printf("Array before modification: ");
    for(int i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");

    printf("\Enter index k to modify (0 to %d): ",n-1);
    scanf("%d", &k);
    printf("Enter a new value for k index: ");
    scanf("%d",&newValue);

    //Updated array
    if(k >= 0 && k<n){
        arr[k] = newValue;
        printf("\nModified array: ");
        for(int i=0; i<n; i++)
        {
            printf("%d ",arr[i]);
        }
    }
    else {
        printf("Invalid index.");
    }
    return 0;
}
