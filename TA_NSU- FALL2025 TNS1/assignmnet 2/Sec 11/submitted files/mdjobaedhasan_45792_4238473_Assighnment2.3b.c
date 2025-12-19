
#include <stdio.h>


    int findlength(char *a)
{
        int count = 0;

            while(*a != '\0')
    {
                count++;
                a++;
    }

        return count;
}

    int main()
{
        char a[] = "NSU CSE115" ;
            printf("Length = %d\n", findlength(a)) ;

        return 0;
}

