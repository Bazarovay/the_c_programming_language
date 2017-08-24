#include <stdio.h>

int main() {
  // int c;
  //
  // while((c = getchar()) != EOF) {
  //   if (c == ' ') {
  //     while ((c = getchar()) == ' ')
  //     ;
  //     c = ' ';
  //   }
  //   putchar(c);
  // }


  int c;

  while((c = getchar()) != EOF) {
      if (c == '\n')
        printf("%s\n", "\\n");

      if (c == '\t')
        printf("%s\n", "\\t");

      if (c == '\b')
        printf("%s\n", "\\b");

      if (c == '\\')
        printf("%s\n", "\\\\");


  }
}
