#include <stdio.h>


        void shiftArr1Pos(int arr[], int arrSize)
    {
               int first = arr[0];
                 for(int i = 0; i < arrSize - 1; i++)
                 {
                    arr[i] = arr[i + 1];
                 }
         arr[arrSize - 1] = first;
     }


  void arr1Rotate(int arr[], int arrSize, int rotFrom)
    {

                for(int i = 0; i < rotFrom; i++)
               {
                       shiftArr1Pos(arr, arrSize);
            }
    }

     int main()
     {
             int arr[50], n, rotFrom;

             printf("Enter number of elements: ");
              scanf("%d", &n);

               printf("Enter array elements: ");
               for(int i = 0; i < n; i++)
                scanf("%d", &arr[i]);

                printf("Rotate array from index: ");
                scanf("%d", &rotFrom);


              printf("Array before rotation: ");
             for(int i = 0; i < n; i++)
               {
                    printf("%d ", arr[i]);
               }
                printf("\n");


          arr1Rotate(arr, n, rotFrom);


     printf("Array after rotating from index %d: ", rotFrom);

    for(int i = 0; i < n; i++)
       {
            printf("%d ", arr[i]);
       }
          printf("\n");

    return 0;
}


