
#include <stdio.h>


    void rev_arr(int *arr1, int *rev_arr1, int size)
{
        int i;
            for(i = 0; i < size; i++)
                *(rev_arr1 + i) = *(arr1 + size - 1 - i);
}

    int main()
{
        int s[] = {10, 20, 30, 40};
        int t[4] ;
        int  i;

        rev_arr(s, t, 4);

            for(i = 0; i < 4; i++)

                printf("%d ", t[i]);

        return 0;
}


