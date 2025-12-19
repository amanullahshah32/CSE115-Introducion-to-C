#include<stdio.h>
int main()
{
    int size,temp;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int Arr[size];
    int *p=&Arr[0];
    printf("Enter elements:\n");
    for (int i=0;i<size;i++)
        scanf("%d",&Arr[i]);
    for (int i=0;i<size-1;i++)
    {
        for (int j=i+1;j<size;j++)
        {
            if (*(p+i)>*(p+j))
            {
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    printf("Ascending order:\n");
    for (int i=0;i<size;i++)
        printf("%d ",*(p+i));
    return 0;
}
