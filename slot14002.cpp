#include <stdio.h>

int main() {
  char str[100];
  int i;

  printf("Nhap chuoii: ");
  gets(str);

  // Chuy?n chu?i thành in hoa
  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] -= 32;
    }
  }
  printf("Chuoi in hoa: %s\n", str);

  return 0;
}
