#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

          printf("Enter %d unique integers:\n", n);
          for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

          printf("Enter index to delete: ", n-1);
         scanf("%d", &x);

          for(int i = x; i < n-1; i++)
           {
                arr[i] = arr[i+1];
           }

          n--;

         printf("New Array: ");

           for(int i = 0; i < n; i++)
              printf("%d ", arr[i]);

    return 0;
}
