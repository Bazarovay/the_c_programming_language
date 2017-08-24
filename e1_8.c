#include <stdio.h>

/*count characters in input; 1st version*/
int main(){

  int nlc, tc, bc, c;

  nlc = tc = bc = 0;
  while((c = getchar()) != EOF){

    if (c == '\n')
      ++nlc;
    if (c == '\t')
      ++tc;

    if (c == ' ')
      ++bc;

  }
  printf("new line count : %d\n", nlc);
  printf("Tab count :  %d\n", tc);
  printf("Blank count : %d\n", bc);
  //
  // double nac;
  //
  // for (nac = 0; getchar() != EOF; ++nac)
  // ;
  //
  // printf("%.0f\n", nac);
}
