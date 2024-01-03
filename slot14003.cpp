	#include <stdio.h>
#include <string.h>

int main() {
  char str[5][100];
  int i, j;


  for (i = 0; i < 5; i++) {
    printf("Nhap chuoi: %d: ", i + 1);
    gets(str[i]);
  }

  
  for (i = 0; i < 5; i++) {
    for (j = i + 1; j < 5; j++) {
      if (strcmp(str[i], str[j]) > 0) {
        char temp[100];
        strcpy(temp, str[i]);
        strcpy(str[i], str[j]);
        strcpy(str[j], temp);
      }
    }
  }

  
  for (i = 0; i < 5; i++) {
    printf("%s\n", str[i]);
  }

  return 0;
}
