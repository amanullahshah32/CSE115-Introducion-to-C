#include<stdio.h>
int main()
{
    int n,k,x,exists=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d unique elements of the array:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter index k to insert the value:");
    scanf("%d",&k);

    if(k<0 || k>=n)
    {
        printf("Invalid index\n");
        return 0;
    }
    printf("Enter the  new value:");
    scanf("%d",&x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            exists = 1;
            break;
        }
    }

    if (exists) {
        printf("Value already exists in array. Insertion cancelled.\n");
        return 0;
    }

    for(int i=n;i>k;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[k]=x;
    n++;
    printf("Array after insertion:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
     
        return 0;
}