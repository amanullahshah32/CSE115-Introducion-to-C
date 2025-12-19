#include<stdio.h>
void RevArr( int arr[], int size)
{
int temp[100], i, j=0;
for(i=size-1; i>=0; i--)
 {
    temp[j]= arr[i];
    j++;
 }
    for(i=0; i<size; i++)
 {
    arr[i]= temp[i];
 }

}


int main()
{
int num, arr[100],i;
printf("Enter size of array: ");
scanf("%d", &num);

printf("Enter the elements: ");
for(i=0; i<num; i++)
    scanf("%d", &arr[i]);

RevArr(arr, num);

printf("Array after being reversed: ");
for(i=0; i<num; i++)
printf("%d ", arr[i]);

return 0;
}
