#include <stdio.h>
int findlength_array(char s[]) {
int len = 0;
while(s[len] != '\0') {
len++;
}
return len;
}
int findlength_pointer(char *s) {
int len = 0;
while(*(s + len) != '\0') {
len++;
}
return len;
}
int main() {
char str1[] = "Ishmam";
char str2[] = "North South University";
printf("String: \"%s\" - Length: %d\n", str1, findlength_array(str1));
printf("String: \"%s\" - Length: %d\n", str2, findlength_pointer(str2));
return 0;
}
