
#include <stdio.h>


    void rev_arr(int arr1[], int rev_arr1[], int size)
{
        int i;
            for(i = 0; i < size; i++)
                rev_arr1[i] = arr1[size - 1 - i];
}

    int main()
{
        int p[] = {1, 2, 3, 4, 5};
        int q[5], i;
        int  i;

            rev_arr(p, q, 5);

        for(i = 0; i < 5; i++)
            printf("%d ", q[i]);

        return 0;
}
