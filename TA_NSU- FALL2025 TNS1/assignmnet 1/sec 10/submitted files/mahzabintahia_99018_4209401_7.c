#include<stdio.h>
#include<string.h>
int main()
{
    int a[200], str[200]={0};
    int i, j, n;

    printf("Number of elements to be stored in array: ");
    scanf("%d", &n);

    printf("Enter integers: ");
        for(i=0; i<n; i++)
        scanf("%d", &a[i]);


    for(i=0; i<n; i++)
    {
        str[a[i]]++;
    }

    printf("Total number of duplicates:");
    for(j=0; j<200; j++)
    {
        if(str[j]>1)
        printf("%d - %d\n", j, str[j]);
    }
}

