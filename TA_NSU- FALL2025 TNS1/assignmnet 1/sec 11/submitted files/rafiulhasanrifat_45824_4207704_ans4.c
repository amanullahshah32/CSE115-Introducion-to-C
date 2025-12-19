#include <stdio.h>
int main()
  {
    int X[100], n, newValue, position;

    printf("Enter the number of elements to populate (n <= 100): ");
    scanf("%d", &n);

    if (n < 0 || n > 100)
    {
        printf("Invalid number of elements!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &X[i]);
    }
    printf("Enter the value to insert after the first %d elements: ", n);
    scanf("%d", &newValue);

    X[n] = newValue;

    printf("Updated array: ");
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", X[i]);
    }
    printf("\n");

    return 0;
}

