#include <stdio.h>
int main()
 {
    int arr[5] = {10, 20, 30, 40, 50};
    int k, newValue, i;

    printf("Original array: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
          printf("\n");

    printf("Enter the index to modify (0 to 4): ");
    scanf("%d", &k);

    if(k < 0 || k >= 5)
    {
        printf("Invalid index! Please enter between 0 and 4.\n");
        return 1;
    }


    printf("Current value at index %d: %d\n", k, arr[k]);

    printf("Enter the new value: ");
    scanf("%d", &newValue);

    arr[k] = newValue;

    printf("\nUpdated array: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
