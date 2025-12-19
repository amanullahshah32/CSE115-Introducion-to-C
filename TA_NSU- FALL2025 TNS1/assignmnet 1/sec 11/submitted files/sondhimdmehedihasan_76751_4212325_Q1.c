#include <stdio.h>

   int main()
   {
         // Write a C program to modify an element in index k (value from user) in an array of all unique integers.

      int n, x, new;

          printf("Enter number of elements: ");
          scanf("%d", &n);

          int arr[n];

          printf("Enter %d unique integers:\n", n);
        for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
      }

       printf("Enter index to modify: ", n-1);
       scanf("%d", &x);

       printf("Enter new value: ");
       scanf("%d", &new);

       arr[x] = new;

       printf("Updated array: ");
       for(int i = 0; i < n; i++)
        {
           printf("%d ", arr[i]);
       }

    return 0;
}
