// Property of Imtiaz 2512169

#include <stdio.h>

int findlen1(char s[])
{
	int len = 0;
	
	for(int i=0; s[i]!='\0'; i++)
	{
		len++;
	}
	return len;
}

int findlen2(char *s)
{
	int len = 0;
	
	for(int i=0; s[i]!='\0'; i++)
	{
		len++;
	}
	return len;
}


int main()
{
	char str[] = "Jews run the world";
	
	int len1 = findlen1(str);
	int len2 = findlen2(str);
	
	printf("Length using char[s]: %d\n", len1);
	printf("Length using char *s: %d", len2);
	
	return 0;
}

// Property of Imtiaz 2512169
