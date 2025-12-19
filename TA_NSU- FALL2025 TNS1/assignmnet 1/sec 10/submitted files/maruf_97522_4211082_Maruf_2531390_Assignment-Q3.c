#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter elements(intput unique elements):");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter index no. to insert:");
    scanf("%d",&k);
    printf("Enter value to insert:");
    scanf("%d",&j);
     n++;
    for(i=n;i>k;i--){
        arr[i]=arr[i-1];
    }

    arr[k]=j;
    printf("Array after inserting the element:");
    for(i=0;i<n;i++){
        printf("%d, ",arr[i]);
    }
}
