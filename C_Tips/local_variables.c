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