
#include <stdio.h>


    int main()
{
        int s[5] = {5, 2, 9, 1, 6};
        int i, j, temp;
        int *a = s;

        for(i = 0; i < 5; i++)
    {
            for(j = i + 1; j < 5; j++)
        {
                if(*(a + i) > *(a + j))
            {
                    temp = *(a + i);
                    *(a + i) = *(a + j);
                    *(a + j) = temp;
            }
        }
    }

        printf("Ascending of the order: ");
            for(i = 0; i < 5; i++)
            {
                printf("%d ", *(a + i));

            }

        return 0;
}

