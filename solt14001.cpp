#include <stdio.h>
#include <string.h>
 
int main() {
  char str[100];
  int i, j;

  printf("Nh?p chu?i: ");
  gets(str);

  // �?o ng�?c chu?i
  for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }

  // In chu?i �? �?o ng�?c
  printf("Chu?i �?o ng�?c: %s\n", str);

  return 0;
}
