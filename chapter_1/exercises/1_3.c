# include <stdio.h>

/* Print Fahrenheit-Celsius table 
 for fahr = 0, 20, ..., 300 
 with floating point 
 and a heading */

int main() 
{
  float fahr, celsius;
  float  lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Fahrenheit to Celsius\n");

  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %12.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
 
}
