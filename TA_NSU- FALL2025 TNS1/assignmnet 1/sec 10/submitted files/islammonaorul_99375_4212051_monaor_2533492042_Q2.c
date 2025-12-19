#include <stdio.h>

int main()
{
    int size,k;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d unique integers:\n", size);
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);

printf("Enter index to delete: ");
    scanf("%d", &k);

    for(int i=k; i<size-1; ++i){
        arr[i]=arr[i+1];
    }
        printf("Array after deletion: ");
        for(int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }

    return 0;
}
