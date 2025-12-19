int findlength(char s[])
{
int count = 0;
while(s[count] != '\0')
count++;
return count;
}
// using pointer
void rev_arr(int *arr1, int *rev_arr1, int size)
{
int j = size - 1;
for(int i=0;i<size;i++)
{
*(rev_arr1+i) = *(arr1+j);
j--;
}
}
// main function
#include<stdio.h>
int main()
{
int a[5] = {1,2,3,4,5};
int b[5];
rev_arr(a,b,5);
for(int i=0;i<5;i++)
printf("%d ", b[i]);
return 0;
}
