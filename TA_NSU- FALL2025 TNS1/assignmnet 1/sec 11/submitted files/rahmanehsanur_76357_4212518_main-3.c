#include <stdio.h>
#include <stdlib.h>

int main()
{
    int H[100];
    int n, NewNumber;

    printf("Enter the number of elements you want to store(1 to 99):");
    scanf("%d",&n);

    printf("Enter %d elements:\n", n);
    for(int i = 0;i < n;i++)
        {
        scanf("%d", &H[i]);
        }

    printf("Enter the new element to insert: ");
    scanf("%d", &NewNumber);
    H[n] = NewNumber;

    printf("Array after inserting the new element:\n");
    for(int i = 0;i<= n;i++)
        {
        printf("%d ", H[i]);
       }


    return 0;
}
