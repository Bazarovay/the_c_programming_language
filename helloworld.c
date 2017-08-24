// Excercise 1.3 & 1.4
#include <stdio.h>

/* print Celsius-Fahreneit table for celsius values
    0,20...300*/
int main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("%s %s\n", "Celsius", "Fahr");
  celsius = lower;
  while (celsius <= upper) {
    fahr = (9.0/5.0*celsius) + 32.0;
    printf("%6.1f %3.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
