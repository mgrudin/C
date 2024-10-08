#include <stdio.h>

int main(int argc, char const *argv[])
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("Fahrenheit\tCelsius\n");
  while (fahr <= upper)
  {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%10.0f\t%7.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}
