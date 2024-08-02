#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int max_line_len);
void reverse(char to[], char from[], int length);

int main()
{
  int len;
  char line[MAXLINE];
  char rev[MAXLINE];

  while ((len = get_line(line, MAXLINE)) > 0)
  {
    reverse(rev, line, len);
    printf("%s\n", rev);
  }

  return 0;
}

int get_line(char line[], int max_line_len)
{
  int c, i;

  for (i = 0; i < max_line_len - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
  {
    line[i] = c;
  }

  if (c == '\n') 
  {
    line[i] = c; 
    ++i;
  }

  line[i] = '\0';

  return i;
}

void reverse(char to[], char from[],  int length)
{
  int i, c;
  c = 0;

  for (i = length - 2; i >= 0; --i)
  {
    to[c] = from[i];
    ++c;
  }

  to[c] = '\0';
  
}
