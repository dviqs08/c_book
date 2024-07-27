#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

float convert(float fahr);

/* Fahrenheit-Celsius table for 
 fahr = 0, 20, ..., 300; floating point; 
using a function instead of inline */

int main()
{
  int fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, convert(fahr));
  return 0;
}

float convert(float fahr)
{
  float celsius;

  celsius = (5.0/9.0) * (fahr-32.0);

  return celsius;
}