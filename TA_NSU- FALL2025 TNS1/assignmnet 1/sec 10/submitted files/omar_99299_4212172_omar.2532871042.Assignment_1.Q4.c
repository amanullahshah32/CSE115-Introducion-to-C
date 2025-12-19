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
     int newvalue;
     printf("Enter the integer you want to insert after(0-%d): ",n);
     scanf("%d",&newvalue);


        arr[n]=newvalue;
        n++;
         printf("The new array is:\n");
         for(i=0;i<n;i++)
         {
             printf("%d ",arr[i]);
         }

}

