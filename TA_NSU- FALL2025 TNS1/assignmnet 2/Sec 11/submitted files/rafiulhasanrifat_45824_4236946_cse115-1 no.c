#include <stdio.h>
int max(int *p, int size)
{
    int maxValue = p[0];
    for(int i = 1; i < size; i++)
    {
        if(p[i] > maxValue)
        {
            maxValue = p[i];
        }
    }

    return maxValue;
}
int main()
{
    int numbers[] = {10, 25, 3, 78, 56};
    int n = 5;

    printf("Maximum number is: %d\n", max(numbers, n));

    return 0;
}

