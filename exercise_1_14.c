#include <stdio.h>

#define CHAR_NUM 95

int main()
{
  int c, max_freq;
  int char_freq[CHAR_NUM];

  max_freq = 0;

  for (int i = 0; i <= CHAR_NUM; ++i)
  {
    char_freq[i] = 0;
  }

  while ((c = getchar()) != EOF)
  {
    ++char_freq[c - ' '];
  }

  putchar('\n');

  for (int i = 0; i <= CHAR_NUM; ++i)
  {
    if (char_freq[i] > max_freq)
    {
      max_freq = char_freq[i];
    }
  }

  for (int i = max_freq; i > 0; --i)
  {
    for (int j = 0; j <= CHAR_NUM; ++j)
    {
      if (char_freq[j] == i)
      {
        putchar('|');
        --char_freq[j];
      }
      else
      {
        putchar(' ');
      }
    }
    putchar('\n');
  }

  for (int i = 0; i <= CHAR_NUM; ++i)
  {
    printf("%c", i + ' ');
  }
  printf("\n");

  return 0;
}