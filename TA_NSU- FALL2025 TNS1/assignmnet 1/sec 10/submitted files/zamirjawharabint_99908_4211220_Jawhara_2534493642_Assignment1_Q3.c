#include<stdio.h>
int main()
{
int arr[100], num, i, j, insertedValue;

printf("Enter array size: ");
scanf("%d", &num);

printf("Enter elements: ");
for(i=0; i<num; i++)
    scanf("%d", &arr[i]);

printf("Index to insert new value: ");
scanf("%d", &j);

printf("Enter the new value: ");
scanf("%d", &insertedValue);

if(j>=0 && j<num)
    for(i=num; i>j; i--)
        arr[i]=arr[i-1];
        arr[j]=insertedValue;
    num++;

printf("Array after inserting new value: ");
for(i=0; i<num; i++)
    printf("%d ", arr[i]);

return 0;
}
