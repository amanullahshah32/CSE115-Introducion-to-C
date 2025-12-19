#include<stdio.h>

void rev_arr(int *arr1, int *rev_arr1, int size)
{
    int i;
    for(i = 0; i < size; i++) {
        *(rev_arr1 + i) = *(arr1 + size - 1 - i);
    }
}

void rev_arr(int arr1[], int rev_arr1[], int size)
{

   int i;
   for(i=0; i<size; i++)
   {
     for(i=0; i<size; i++){
        rev_arr1[i] = arr1[size-i-1];
     }



   }

}


void main(){
int n,i;
printf("Enter array size: ");
scanf("%d",&n);
int a[n];
printf("Enter array elements:\n");
for(i=0;i<n;i++){
   scanf("%d",&a[i]);
}
int b[n];
rev_arr(a,b,n);
printf("The reverse of the array is:\n");
for(i=0;i<n;i++){
  printf("%d ", b[i]);

}






}
