#include<stdio.h>

void main()
{
  int n;
  printf("Enter size of array: ");
  scanf("%d", &n);
  int a[n],temp;
  int i,j;
  printf("Enter array elements:\n");
  for(i=0;i<n;i++)
  {
      scanf("%d", (a+i));
  }
  for(i=0;i<n-1;i++)
  {
      for(j = i + 1; j < n; j++)
        {

            if(*(a + j) < *(a + i)) {   // compare using pointers
                temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }

  }

  printf("The array in ascending order is:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));   // pointer print
    }
}
