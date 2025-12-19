void rev_arr(int *arr1, int *rev_arr1, int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        *(rev_arr1 + i) = *(arr1 + size - 1 - i);
    }
}
