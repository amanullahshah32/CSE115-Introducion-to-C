// Property of Imtiaz 2512169

#include <stdio.h>
#include <string.h>

int main()
{
	char str[50];
	int len, isPal=1;
	
	printf("Enter the string (no spaces): ");
	scanf("%s", str);
	
	len = strlen(str);
	
	for(int i=0; i<len; i++)
	{
	    if (str[i] != str[len-i-1]) 
	    {
            isPal = 0;
            break;
	    }
	}

	if(isPal==1)
	    printf("The string is palindrome");
	else
	    printf("The string is not palindrome");
	    
    return 0;
}

// Property of Imtiaz 2512169
