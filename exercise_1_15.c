#include <stdio.h>

int f_to_c(int f);

int main(int argc, char const *argv[])
{
  int fahr;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper)
  {
    printf("%d\t%d\n", fahr, f_to_c(fahr));
    fahr = fahr + step;
  }

  return 0;
}

int f_to_c(int f)
{
  return 5 * (f - 32) / 9;
}