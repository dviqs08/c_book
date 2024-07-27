/* prints input one word per line */
#include <stdio.h>

#define IN  1
#define OUT 0

int main()
{
  int c, state;

  state = IN;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else state = IN;
    if (state == IN)
      putchar(c);
    if (state == OUT)
      putchar('\n');
  }
}
