#include <stdio.h>
int main()
{
    printf("Enter size of array: ");int n;scanf("%d",&n);
    int num[n],i,j,index=0;
    printf("Enter array elements: ");for(i=0;i<n;i++)scanf("%d",&num[i]);
    printf("All the unique numbers in the array: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(num[i]==num[j])
                break;//repeated number so skip
        }
        if(j==i)//it went to end without breaking, so unique
        {
            num[index]=num[i];
            printf("%d ",num[i]);
            index++;
        }
    }
    return 0;
}//PRINTS UNIQUE NUMBERS IN AN ARRAY
