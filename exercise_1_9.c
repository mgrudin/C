#include <stdio.h>

int main()
{
  int c, pc;

  while (c != EOF)
  {
    c = getchar();

    if (pc == ' ')
    {
      if (c == ' ')
      {
        continue;
      }
    }

    putchar(c);

    pc = c;
  }

  return 0;
}