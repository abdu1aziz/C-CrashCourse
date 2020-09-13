#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main(){

    char words[100] = "I ";

    // Appending to existing string/char variable (append limit upto 100).
    strcat(words, "Love ");
    strcat(words, "To ");
    strcat(words, "Eat ");
    strcat(words, "Apples ");

    // string for data type '%s'
    printf("%s\n", words);


    // Replacing the String with another String.
    strcpy(words, "I Love New York!");

    // Printing New Replaced String.
    printf("%s\n", words);

    return 0;

}
