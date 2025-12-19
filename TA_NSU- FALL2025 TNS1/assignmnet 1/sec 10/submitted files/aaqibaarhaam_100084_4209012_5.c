#include <stdio.h>
int main()
{
    printf("Enter array size: "); int n; scanf("%d",&n);
    float arr[n],sum=0;
    printf("Enter elements:\n");int i;for(i=0;i<n;i++){scanf("%f",&arr[i]);sum+=arr[i];}
    float average=sum/n;
    float maxarray[n];//n elements, safest option as elements greater than average cannot exceed n
    int count=0;
    for(i=0;i<n;i++)
        {
            if(average<arr[i])
            {
                maxarray[count]=arr[i];
                count++;
            }
        }
    printf("Average: %f, The elements greater than average are: ",average);
    for(i=0;i<count;i++)
        printf("%f ",maxarray[i]);
    return 0;
}
