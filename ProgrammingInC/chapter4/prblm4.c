/*Problem 4*/

#include <stdio.h>

float f_to_c(int fahrenheit)
{
  float celsius = (fahrenheit - 32) / 1.8;
  return celsius;
}

int main(void)
{
  int freezing = 32;
  int boiling = 212;

  printf("32 in F is %g in C\n", f_to_c(freezing));
  printf("212 in F is %g in C\n", f_to_c(boiling));

  return 0;
}

