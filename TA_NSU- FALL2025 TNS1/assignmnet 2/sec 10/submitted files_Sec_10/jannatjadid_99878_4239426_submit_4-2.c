#include <stdio.h>
void rev_arr(int arr[], int rev_arr1[], int size)
{
    for (int i = 0; i < size; i++)
    {
       rev_arr1[i]=arr[size-1-i];
    }

   printf("Reversed array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", rev_arr1[i]);
    }
    printf("\n");
    
}
int main()
{
    int n;
    printf("\n enter size:");
    scanf("%d", &n);
    int arr[n],rev_arr1[n];
    printf("\n enter elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
      rev_arr(arr, rev_arr1, n);

return 0;
}

// using pointer

#include <stdio.h>
void rev_arr(int *arr, int *rev_arr1, int size)
{
    for (int i = 0; i < size; i++)
    {
       *(rev_arr1+i)=*(arr+size-1-i);
    }

   printf("Reversed array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(rev_arr1+i));
    }
    printf("\n");
    
}
int main()
{
    int n;
    printf("\n enter size:");
    scanf("%d", &n);
    int arr[n],rev_arr1[n];
    printf("\n enter elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
      rev_arr(arr, rev_arr1, n);

return 0;
}
