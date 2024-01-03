#include <stdio.h>
#include <string.h>
 
int main() {
  char str[100];
  int i, j;

  printf("Nh?p chu?i: ");
  gets(str);

  // Ð?o ngý?c chu?i
  for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }

  // In chu?i ð? ð?o ngý?c
  printf("Chu?i ð?o ngý?c: %s\n", str);

  return 0;
}
