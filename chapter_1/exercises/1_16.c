#include <stdio.h>
#define MAXLINE 10 /* max line length */

int getLine(char line[], int lim);
void copy(char to[], char from[]);

/* prints the length of the longest line
 if the length of the line is too long
 prints the length of that line and as much text 
 as possible
*/
int main() 
{
  int len;                /* current line length */ 
  int max;                /* maximum length seen so far */
  char line[MAXLINE];     /*  current input line */
  char longest[MAXLINE];  /* longest line saved here */ 

  max = 0;
  while ((len = getLine(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(longest, line);
    }

  /* visually seperate output from input */
  for (int j = 0; j <= 10; ++j)
    printf("-");
  printf("\n");
  
  /* print output */
  if (max >= MAXLINE-1) { /* line is too long */
    printf("The line is too long to fully display\n");
    printf("Displaying length and truncated line\n");
    printf("Length: %d\n%s\n", max, longest);
  }
  else if (max > 0) /* there was a line */
    printf("%s", longest);
  return 0;
}

/* getLine: read a line into s, return length */
int getLine(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;  
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

/* copy: copy 'from' into 'to'; assumes 'to' is big enought */
void copy(char to[], char from[])
{  
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}