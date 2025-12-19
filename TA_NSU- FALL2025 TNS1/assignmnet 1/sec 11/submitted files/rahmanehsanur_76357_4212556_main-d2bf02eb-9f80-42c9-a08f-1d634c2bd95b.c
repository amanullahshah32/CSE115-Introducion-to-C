#include <stdio.h>
#include <stdlib.h>

int main()
{

    char str[200], result[200];
    int i =0, j =0;

     printf("Enter a string: ");
    scanf("%s",str);

    while(str[i] != '\0')
    {
       if(isalpha(str[i]))
       {
        result[j]= str[i];
       j++;
       }
        i++;
    }
    result[j]='\0';

    printf("Output: %s\n",result);

    return 0;
}
