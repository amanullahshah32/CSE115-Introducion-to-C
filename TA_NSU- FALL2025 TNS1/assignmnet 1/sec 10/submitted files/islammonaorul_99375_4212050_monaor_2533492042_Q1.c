#include<stdio.h>
int main()
{ int size, index, mod;
 printf("enter array size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter %d unique integers:\n", size);
    for(int i=0;i<size;i++)
        {
        scanf("%d",&arr[i]);
        }

    printf("Enter index to modify: ");
    scanf("%d",&index);
    printf("Enter new value: ");
    scanf("%d", &mod);

    if(index>=0&&index<size)
        {
        arr[index] = mod;
        printf("Modified array: ");
        for(int i=0; i<size; i++) {
            printf("%d ",arr[i]);
        }
      }

    return 0;
}
