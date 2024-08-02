#include <stdio.h>
#define MAXLINE 1000
#define MINLINE 80

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/* prints all lines longer than eighty chars */
int main()
{
  int len;
  int count;
  char line[MAXLINE];
  char longest[MAXLINE];
  char list[MAXLINE][MAXLINE];

  count = 0;
  while ((len = getLine(line, MAXLINE)) > 0)
    if (len >= MINLINE) {
      copy(list[count], line);
      ++count;
    }

  for (int i = 0; i < count; ++i) 
    printf("%s\n", list[i]);

}

/* getline: read a line into s, return length */
int getLine(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
  int i;

  i = 0;
  while((to[i] = from[i]))
    ++i;
}
