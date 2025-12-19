#include <stdio.h>
void rev_arr (int arr1[], int rev_arr1[], int size)
{
    for(int i=0,j=size-1; i<size; i++,j--)
        rev_arr1[i]=arr1[j];
}
int main()
{
    printf("Enter size: "); int size; scanf("%d",&size);
    int arr[size];
    printf("Enter array elements:\n");
    for (int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    int revarr[size];
    rev_arr(arr,revarr,size);
    for (int i=0;i<size;i++)
        printf("%d ",revarr[i]);
    return 0;
}
