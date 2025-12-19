#include<stdio.h>
int max(int *p,int size)
{
    int maxVal=*p;
    for(int i=1; i<size; i++)
    {
        if(*(p+i)>maxVal) maxVal=*(p+i);
    }
    return maxVal;
}
int main()
{
    int n;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    int arr[n];
    int *p=arr;
    printf("Enter elements:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",(p+i));
    }
    int m=max(arr,n);
    printf("\nMax element is %d.",m);

}
