#include <stdio.h>

#define OUT 0
#define IN 1

int main()
{
  int c, state;

  state = OUT;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\n' || c == '\t')
    {
      if (state == IN)
      {
        c = '\n';
      }
      state = OUT;
    }
    else
    {
      state = IN;
    }
    putchar(c);
  }

  return 0;
}