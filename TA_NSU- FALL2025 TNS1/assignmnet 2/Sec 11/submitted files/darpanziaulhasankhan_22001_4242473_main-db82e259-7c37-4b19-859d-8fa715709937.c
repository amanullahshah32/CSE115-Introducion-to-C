void sortAsc(int *p, int size)
{
    int i, j, temp;
    for(i = 0; i < size - 1; i++)
    {
        for(j = i + 1; j < size; j++)
        {
            if(*(p + i) > *(p + j))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
}
