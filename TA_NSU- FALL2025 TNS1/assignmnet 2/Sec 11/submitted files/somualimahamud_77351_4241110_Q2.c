#include<stdio.h>
int main()
{
    int ar[7];
    int* p=ar;
    int i=0,j=0;
    for(i=0;i<7;i++)
    {

        printf("ar[%d]:",i);
        scanf("%d",(p+i));

    }
    for(i=0;i<7;i++)
    {
        for(j=0;j<7-i-1;j++)
        {

            if(*(p+j)>*(p+j+1))
            {
                int tem = *(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=tem;
            }
        }
    }

    for(i=0;i<7;i++)
    {
        printf("%d ",*(p+i));
    }
}
