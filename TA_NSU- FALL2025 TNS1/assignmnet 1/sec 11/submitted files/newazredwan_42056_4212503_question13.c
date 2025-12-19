#include <stdio.h>

int main() {
char str[200];
int i, j, isPalindrome = 1;

printf("Enter a string: ");
fgets(str, sizeof(str), stdin);

for (j = 0; str[j] != '\0' && str[j] != '\n'; j++);

j--;

for (i = 0; i < j; i++, j--) {
if (str[i] != str[j]) {
isPalindrome = 0;
break;
}
}

if (isPalindrome)
printf("The string is a palindrome.\n");
else
printf("The string is NOT a palindrome.\n");

return 0;
}
