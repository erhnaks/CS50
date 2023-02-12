#include <stdio.h>
#include <cs50.h>

int main(void)
{
// Get the length of the Array form the user input
int length;
do
length = get_int("number: ");
while( length < 1);
// Set the length of the array from the user input
int twice[length];
twice[0] = 1;
// printf("%i\n", twice[0]);
// print the numbers * 2 from the start of 1;
for(int i = 1; i <= length; i++)
{
  twice[i] = 2 * twice[i - 1];
  printf("%i\n", twice[i]);
}

}