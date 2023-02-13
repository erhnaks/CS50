// Variable Score:

int main (void)
{
  int result = triple(5);
}

int triple(x)
{
  return x * 3;
}

// X is local to the function triple() No other function can refer to it, not  even main method.
// result is loca to main!

// GLOBAL VARIABLES --------------------------------

// Global variables exist too. If a variable is declared outside of all functions, any function may refer to it.

float global = 0.5050;

int main (void)
{
  triple();
  printf("%f\n", global);
}

void triple (void)
{
  global *= 3;
}