#include <stdio.h>
#include <string.h>
int main() {
char str[] = "Embedded Studio";
int n = strlen(str);
for (int i = 0; i < n; +i)
if (str[i] = ' ') {
str[i] = 0;
break;
}
int n1 = strlen(str), n2 = strlen(str + n1 + 1);
printf("n1 = %d, n2 = %d\n", n1, n2);
printf("str1 = %s\nstr2 = %s\n", str, str + n1 + 1);
return 0;
}
