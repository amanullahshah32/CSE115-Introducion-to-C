#include<stdio.h>


 int main()
 {
     int k,arr[100],n,i;
     printf("Enter the size of array: ");
     scanf("%d",&n);
     printf("Enter %d unique integers:\n",n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     printf("The original integers:\n");
     for(i=0;i<n;i++)
     {
         printf("%d ",arr[i]);
     }
     printf("Enter the index you want to modify (0-%d): ",n-1);
     scanf("%d",&k);
     int newvalue;
     printf("Enter the new value: ");
     scanf("%d",&newvalue);
     if(k>=0&&k<=n)
     {
         arr[k]=newvalue;
         printf("The new array is:\n");
         for(i=0;i<n;i++)
         {
             printf("%d ",arr[i]);
         }
     }
     else
        printf("Invalid");
}
