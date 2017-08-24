// FUNCTIONS
#include <stdio.h>

int power(int m, int n);
float getfahr(float fahr);

/* test the power function */
int main() {

  int i;

  // for (i = 0; i < 10; ++i) {
  //   printf("%d %d %d\n", i, power(2,i), power(-3,i));
  // }

  float celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("%s %s\n", "Celsius", "Fahr");
  celsius = lower;
  while (celsius <= upper) {
    printf("%6.1f %3.0f\n", celsius, getfahr(celsius));
    celsius = celsius + step;
  }



  return 0;
}


/* print Celsius-Fahreneit table for celsius values
    0,20...300*/
float getfahr(float celsius) {
  float fahr = (9.0/5.0*celsius) + 32.0;
  return fahr;
}


/* power: raise base to n-th power; n >= 0 */
int power(int base, int n) {

  int i, value;
  value = base;

  for (i = 0; i < n; ++i) {
    value = value*base;
  }

  return value;
}
