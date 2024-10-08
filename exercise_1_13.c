#include <stdio.h>

#define OUT 0
#define IN 1

int main()
{
  int c, state, wcounter, max_length;
  int lwords[10];

  state = OUT;
  wcounter = 0;
  max_length = 0;

  for (int i = 0; i < 10; ++i)
    lwords[i] = 0;

  while ((c = getchar()) != EOF && wcounter < 10)
  {
    if (c == ' ' || c == '\n' || c == '\t')
    {
      state = OUT;
    }
    else
    {
      if (state == OUT)
      {
        ++wcounter;
        state = IN;
      }
      ++lwords[wcounter - 1];
    }
  }

  for (int i = 0; i < wcounter; ++i)
  {
    if (lwords[i] > max_length)
    {
      max_length = lwords[i];
    }
  }

  for (int i = max_length; i > 0; --i)
  {
    for (int j = 0; j < 10; ++j)
    {
      if (lwords[j] == i)
      {
        putchar('|');
        --lwords[j];
      }
      else
      {
        putchar(' ');
      }
    }
    putchar('\n');
  }

  for (int i = 1; i <= wcounter; ++i)
  {
    printf("%d", i);
  }
  printf("\n");

  return 0;
}