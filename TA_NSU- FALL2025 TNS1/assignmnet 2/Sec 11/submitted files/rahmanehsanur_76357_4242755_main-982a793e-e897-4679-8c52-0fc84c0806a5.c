#include <stdio.h>
#include <stdlib.h>

/*
void rev_arr(int arr1[], int rev_arr1[], int size)
{
    int j = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        rev_arr1[j] = arr1[i];                 //a
        j++;
    }
}
*/

void rev_arr(int *arr1, int *rev_arr1, int size)
{
    int j = 0;
    for (int i = size - 1; i >= 0; i--)       //b
    {
        *(rev_arr1 + j) = *(arr1 + i);
        j++;
    }
}




/*int main()
{
    int arr1[5] = {50,10, 25,4, 99};
    int rev_arr1[5];

    rev_arr(arr1,rev_arr1,5);                 //a

    printf("Reversed array:\n");
    for (int i =0;i<5; i++)
    {
        printf("%d",rev_arr1[i]);
    }

    return 0;

}
                     */


int main()
{
    int arr1[5] ={10, 40,30, 20, 90};
    int rev_arr1[5];

    rev_arr(arr1,rev_arr1, 5);

    printf("Reversed array:\n");        //b
    for (int i = 0; i< 5;i++)
    {
    printf("%d ",*(rev_arr1+ i));
    }

    return 0;
}
