#include <stdio.h>

int main(){

int arr[100], num, i, k, modVal;

  printf("Enter array size: ");
       scanf("%d", &num);
  printf("Enter elements: ");
       for( i = 0; i < num; i++)
           scanf("%d", &arr[i]);

  printf("Index of element to modify: ");
       scanf("%d", &k);

  printf("Enter the value you want:");
       scanf("%d", &modVal);

  if(k>=0 && k<num)
        arr[k]= modVal;

   printf("Array after modification: ");
    for(i=0;  i< num; i++)
        printf("%d", arr[i]);

 return 0;
}
