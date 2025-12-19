#include<stdio.h>
#include<string.h>
int main()
{
int arr[100], str[100]={0};
int i, j, num;

printf("Number of elements to be stored in array: ");
scanf("%d", &num);

printf("Enter integers: ");
for(i=0; i<num; i++)
    scanf("%d", &arr[i]);


for(i=0; i<num; i++)
 {
        str[arr[i]]++;
 }

printf("Total number of duplicates:");
for(j=0; j<100; j++)
 {
    if(str[j]>1)
    printf("%d \n", str[j]);
 }
}

