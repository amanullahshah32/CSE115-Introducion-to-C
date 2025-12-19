#include<stdio.h>
int max(int *p, int size)
{
int largest = *p;
for(int i=1;i<size;i++)
{
if(*(p+i) > largest)
largest = *(p+i);
}
return largest;
}
int main()
{
int arr[5] = {10, 25, 7, 40, 18};
printf("Largest element = %d\n", max(arr,5));
return 0;
}
