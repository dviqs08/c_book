#include <stdio.h>
#define MAXLINE 1000  /* maximum input line length */

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
int main()
{
  int len;                /* current line length */
  int max;                /* maximum length seen so far */
  char line[MAXLINE];     /* current input line */
  char longest[MAXLINE];  /* longest line save here */

  max = 0;
  while ((len = getLine(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  if (max > 0) /* there was a line */
    printf("%s", longest);
  return 0;
}

/* getLine: read a line into s, return length */
int getLine(char s[], int lim)
{
  int c, i;

  for (i=0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

/* copy: copy 'from' into 'to'; assume to is big enought */
void copy(char to[], char from[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}

/*
when you pass an argument to a function, it is passed by "value",
meaning you get a copy of thing. So you can't access them to change them
because you need their memory address.
when you pass a an array however, you are passing a pointer to the 
array (or the address of the array) so you can change array elements
*/

/*
strings in c
"hello\n"
is represented as
h | e | l | l | o | \n | \0 | in memory
*/