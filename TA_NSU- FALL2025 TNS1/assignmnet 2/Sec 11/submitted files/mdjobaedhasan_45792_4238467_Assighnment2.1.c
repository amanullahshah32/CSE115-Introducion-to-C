
#include <stdio.h>


    int max(int *u, int size)
{
    int i, a = *u;
        for(i = 1; i < size; i++)
    {
        if(*(u + i) > a)
            a = *(u + i);
    }
        return a;
}

    int main()
{
    int s[] = {5, 9, 2, 11, 3};
    int size = 5;

        printf("Maximum = %d\n", max(s, size));
        return 0;
}

