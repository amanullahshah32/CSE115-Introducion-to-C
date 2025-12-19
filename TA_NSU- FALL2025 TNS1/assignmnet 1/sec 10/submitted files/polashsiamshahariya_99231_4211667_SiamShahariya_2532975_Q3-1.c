#include <stdio.h>
int main() {
    int n, i, k,newvalue;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d unique integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter index k to insert at (0 to %d): ",n);
    scanf("%d", &k);
    printf("Enter new value to insert : ");
    scanf("%d",&newvalue);
    for(int i=0;i<n;i++){
        if(a[i]==newvalue){
            printf("Value already exists in array\n");
            return 0;
        }
    }
    for(int i=n;i>k;i--){
        a[i]=a[i-1];
    }
    a[k]=newvalue;
    n++;
    printf("After insertion : \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
