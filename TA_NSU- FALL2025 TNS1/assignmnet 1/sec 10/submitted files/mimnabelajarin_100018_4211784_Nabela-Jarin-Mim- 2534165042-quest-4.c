#include <stdio.h>
int main() {
    int x[100],n,newValue;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&x[i]);
    printf("Enter new element to insert after first %d elements: ",n);
    scanf("%d",&newValue);
    x[n]=newValue;
    n++;
    printf("\nArray after insertion:\n");
    for(int i=0;i<n;i++)
    printf("%d",x[i]);
    return 0;
}
