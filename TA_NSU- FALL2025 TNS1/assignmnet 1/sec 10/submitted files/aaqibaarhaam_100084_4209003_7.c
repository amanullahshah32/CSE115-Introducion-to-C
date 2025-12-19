#include <stdio.h>
int main()
{
    int n; printf("Input the number of elements to be stored in array: "); scanf("%d", &n);
    int arr[n];printf("Input elements are:\n");for(int i = 0; i < n; i++) scanf("%d",&arr[i]);
    int count = 0;
    for(int i=0;i<n;i++)//checks each character
    {
        int flag=0;
        for(int j=i+1;j<n;j++)//“Does this value appear again later in the array?”
        {
            if(arr[i]==arr[j])//if current element comes again after
            {
                flag=1;//duplicate found
                break;
            }
        }
        int flag2=0;//another flag to check if we counted this earlier
        if(flag)//only check previous elements if duplicate exists
        {
            for(int j=0;j<i;j++)//“Have we already counted this value as a duplicate before?”
                if(arr[i]==arr[j])
                    flag2=1;//already counted
        }
        if(flag && !flag2)//it has duplicates, and it was not previously found, flag==0
            count++;
    }
    printf("Total number of duplicate elements found in array: %d",count);
    return 0;
}
//COUNTS HOW MANY ELEMENTS HAVE DUPLICATES IN ARRAY
