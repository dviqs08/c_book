#include <stdio.h>

/* replaces a string of one or more blanks with one blank */
int main()
{
  int c, nc;
  
  while ((c = getchar()) != EOF) {
    putchar(c);
    if (c == ' ') {
      while ((nc = getchar()) == ' ') {
        ; 
      } 
      putchar(nc);
    }
  }
}
