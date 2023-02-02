#include <stdio.h>
#include <cs50.h>

int main(void)
{
  long x = get_long("x: ");
  long y = get_long("y: ");

  float z = (float) x / (float) y;

  printf("%f\n", z);
}

// you need to turn int value into float to get the correct value when dividing.
// also dont forget to use %f for the float place holder and turn int x and y into float;