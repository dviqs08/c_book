#include <stdio.h>

/* write a program to count blanks, tabs, and newlines */
int main()
{
  int c, blank, tab, nl;

  blank = 0;
  tab = 0;
  nl = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++nl;
    else if (c == '\t') 
      ++ tab;
    else if (c == ' ')
      ++ blank;
  }
  printf("blanks: %d\ttabs: %d\t\tnewlines: %d\n", blank, tab, nl);
}
