#include <stdio.h>
void ascending(int *p, int size)
{
    for(int i=0; i<size-1; i++)//size-1, becuase j=i+1 swaps size-1 element too
        for(int j=i+1;j<size;j++)//checks all values ahead and swaps till last one is smaller
            if(*(p+i)>*(p+j))//swaps in ascending order
            {
                int temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
}//SETS THE ARRAY IN ASCENDING ORDER
int main()
{
    printf("Enter size of array: "); int n; scanf("%d",&n);
    int arr[n];
    int *p=arr;//holds the base address &arr[0]
    for(int i=0;i<n;i++)
        scanf("%d",(p+i));
    ascending(arr,n);
    for(int i=0;i<n;i++)
        printf("%d ",*(p+i));
    return 0;
}
//p is like house number
//*p is like person living in the house
