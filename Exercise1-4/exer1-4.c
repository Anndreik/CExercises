#include <stdio.h> 
/* print Fahrenheit-Celsius table 
    for fahr = 0, 20, ..., 300; floating-point version */ 
int main() 
{ 
  float fahr, celsius; 
  float lower, upper, step; 
  lower = -50;      /* lower limit of temperatuire scale */ 
  upper = 100;    /* upper limit */ 
  step = 10;      /* step size */ 
  celsius = lower;
  printf("celsius\t  fahr\n"); 
  printf("---------------\n");
  while (celsius <= upper) { 
      fahr = (9.0/5.0) * celsius + 32.0; 
      printf("%3.0f\t%6.1f\n", celsius, fahr); 
      celsius = celsius + step; 
  } 
  return 0;
}