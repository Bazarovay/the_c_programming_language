#include <stdio.h>

int main() {
  // int c = getchar();
  // putchar(c);

/*  read a character
  while (charater is not end-of-file indicator)
  output the character just read
  read a character
*/
  int c;

  while((c = getchar()) != EOF) {
    printf("%d\n", getchar() != EOF);
    putchar(c);
  }

  printf("%d\n", c);
}
