#include <stdio.h>
#include <cs50.h>

int add_two(int x, int y);
float multi(float a, float b);

int main(void)
{
  int a = get_int("First number: ");
  int b = get_int("second number: ");

  int c = add_two(a, b);

  int d = multi(a,b);

printf("Your result is: %i + %i = %i\n", a, b, c);
printf("Your result is: %i + %i = %i\n", a, b, d);

}

float multi(float a, float b)
{

  float sum = a * b;
  return sum;

}

int add_two(int x, int y)
{
  return x + y;
}