#include <stdio.h>

int main(void)
{
  char c = get_char("Do you agree? Type Y or N to continue! ");

  if (c == 'y' || c == 'Y')
  {
    printf("Agreed!\n");
  }
  else if (c == 'n' || c == 'N')
  {
    printf("Disagree!\n");
  }
  else
  {
    printf("Please enter a valid answer eg y or n");
  }

}