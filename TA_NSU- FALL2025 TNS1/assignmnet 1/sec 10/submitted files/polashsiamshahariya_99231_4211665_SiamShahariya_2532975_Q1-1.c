#include<stdio.h>
int main(){
    int n;
    printf("Enter Number Of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d unique integers:\n", n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k,newvalue;
    printf("Enter index k to modify (0 to %d) : ",n-1);
    scanf("%d",&k);
    printf("Enter new value for arr[%d] : ",k);
    scanf("%d",&newvalue);
    arr[k]=newvalue;
    printf("After modification:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}