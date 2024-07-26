#include <stdio.h>
/* Prints Celsius to Fahrenheit table 
 for fahr = 0, 20, ..., 300 */

int main()
{
  float celsius, fahr;
  float lower, upper, step;

  lower = -17.8;
  upper = 148.9;
  step = 11.1;

  celsius = lower;
  while (celsius <= upper) {
    fahr = celsius * (9.0/5.0) + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}

