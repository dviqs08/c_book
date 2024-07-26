/* verify the value of c = getchar() != EOF */
#include <stdio.h>

int main()
{
  int c;

  while(1) {
    printf("%d\n", getchar() != EOF);
  }
}
