#include<stdio.h>
int main(){
    int x[100];
    int n,i,newvalue;
    printf("Enter number of elements (n<=99) : ");
    scanf("%d",&n);
    printf("Enter %d integers :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    printf("Enter new elements to insert after the first %d elements : ",n);
    scanf("%d",&newvalue);
    x[n]=newvalue;
    n++;
    printf("Ater insertion (totat %d elements):\n",n);
    for(int i=0;i<n;i++){
        printf("%d ",x[i]);
    }

    return 0;
}