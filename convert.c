#include <stdio.h>

// Print Fahrenheit-Celsius

void main()
{
  int fahr;
  float celsius;
  int lower, upper,step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("Fahr\tCelsius\n");
  while (fahr <= upper)
  {
      celsius = (fahr-32.0)*(5.0/9.0);
      printf("%3d %8.1lf\n",fahr,celsius);
      fahr = fahr + step;
  }
}
