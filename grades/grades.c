#include <cs50.h>

#include <stdio.h>

#include <ctype.h>

#include <string.h>

#include <math.h>
 // math library is to use round method

int main(void) {
    string text = get_string("Text: ");

    int letters = 0, sentences = 0, words = 1;
    // Counting letters, words and sentences in text.
    for (int i = 0; i < strlen(text); i++) {
        if (isalpha(text[i])) {
            letters++;
        } else if (text[i] == ' ') {
            words++;
        } else if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
            sentences++;
        }
    }
    // Calculating the Grade of the text using a formula!
    // Converting int to float
    // Rounding the result up to get the correct resutl using round math function!
    float L = letters / (float) words * 100;
    float S = sentences / (float) words * 100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index <= 1) {
        printf("Before Grade 1\n");
    } else if (index >= 16) {
        printf("Grade 16+\n");
    } else {
        printf("Grade %i\n", index);
    }
}