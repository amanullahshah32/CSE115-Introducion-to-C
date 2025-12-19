// Property of Imtiaz 2512169

#include <stdio.h>
#include <string.h>

int main()
{
	char A[100];
	char B[50];

	printf("Enter string A (no spaces): ");
	scanf("%s", A);

	printf("Enter string B (no spaces): ");
	scanf("%s", B);
	
    strcat(A,B);
    printf("After joining: %s", A);
    
    return 0;
}

// Property of Imtiaz 2512169
