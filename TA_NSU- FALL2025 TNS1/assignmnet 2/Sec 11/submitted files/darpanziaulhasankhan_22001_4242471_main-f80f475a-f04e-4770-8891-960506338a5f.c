int max(int *p, int size)
{
    int i, maxVal = *p;
    for(i = 1; i < size; i++)
    {
        if(*(p + i) > maxVal)
            maxVal = *(p + i);
    }
    return maxVal;
}
