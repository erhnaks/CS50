#include <stdio.h>

int main () {
    
    // declaring the char variable
    char character;
 
    printf("Enter the character: ");
    // taking input of single character using getchar() function
    character = getchar();
 
    printf("Character entered is: ");
    // printing the entered character using putchar() function used to output the single character
    putchar(character);

    return(0);
}