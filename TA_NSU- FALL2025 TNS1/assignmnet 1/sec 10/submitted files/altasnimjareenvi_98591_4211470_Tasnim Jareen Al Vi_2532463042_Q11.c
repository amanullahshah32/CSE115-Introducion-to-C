#include<stdio.h>
int main()
{
    char array[100];
    int i, j=0;
    printf("Input a string:");
    gets(array);

     for(int i=0; array[i]!='\0' ; i++)
    {
        if((array[i] >='A' && array[i] <='Z')|| (array[i] >='a' && array[i] <='z'))
        {
            array[j]=array[i];
            j++;
        }
    }
    array[j]='\0';
    printf("String with only Alphabets:%s", array);
    return 0;
}
