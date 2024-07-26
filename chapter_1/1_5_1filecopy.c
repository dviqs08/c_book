/* read a character
  while (character is not end-of-file indicator)
    output the character just read
    read a charater
*/

#include <stdio.h>
int main()
{
  int c;

  while ((c = getchar()) != EOF)
    putchar(c);
}