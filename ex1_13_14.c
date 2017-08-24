#include <stdio.h>

/*count digits, white spaces, others*/
int main(){
  // int c, i, nwhite, nother;
  // int ndigit[10];
  //
  // nwhite = nother = 0;
  //
  // for (i = 0; i < 10; ++i)
  //   ndigit[i] = 0;
  //
  // while((c = getchar()) != EOF)
  //   if (c >= '0' || c <= '9')
  //     ++ndigit[c-'0'];
  //   else if (c == ' ' || c == '\n' || c == '\t')
  //     ++nwhite;
  //   else
  //     ++nother;
  //
  // printf("digits  =");
  // for (i = 0; i < 10; ++i)
  //   printf(" %d", ndigit[i]);

  #define IN 1
  #define OUT 0
  int state, c, nw;
  state = OUT;

  nw = 0;

  int alphabet_count;
  int alpha_set[127];

  int a;
  for (a = 0; a <= 127; ++a) {
    alpha_set[a] = 0;
  }


  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      state = OUT;
      printf("\n");
    }
    else if (state == OUT) {
      ++nw;
      state = IN;
    }

    if (state == IN)
        ++alpha_set[c];
  }

  int b = 0;
  for (a = 0; a <= 127; ++a) {
    if (alpha_set[a] > 0) {
      putchar(a);
      for (b = 0; b < alpha_set[a]; ++b) {
        printf("-");
      }
      printf("\n");
    }
  }
}
