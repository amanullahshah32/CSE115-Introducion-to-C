#include <stdio.h>
int main() {
 int n,i,k,count=0;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter %d elements:\n",n);
    for(i=0;i <n;i++)
        scanf("%d",&arr[i]);
   for(i=0;i<n;i++){
    for(k=i+1;k<n;k++){
            if(arr[i] == arr[k]) {
                count++;
    }}
    } printf("Total number of duplicate elements found in array: %d\n",count);
return 0;
}
