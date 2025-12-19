#include<stdio.h>
int main()
{
int arr[5] = {5, 2, 9, 1, 6};
int *p = arr;
int temp;
for(int i=0;i<5;i++)
{
for(int j=i+1;j<5;j++)
{
if(*(p+i) > *(p+j))
{
temp = *(p+i);
*(p+i) = *(p+j);
*(p+j) = temp;
}
}
}
printf("Ascending order:\n");
for(int i=0;i<5;i++)
printf("%d ", *(p+i));
return 0;
}
