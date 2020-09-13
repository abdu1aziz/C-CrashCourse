#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main(){

    char personName[50], favFood[20], finalStatment[100];

    puts("What is Your Name: ");
    gets(personName);

    puts("What's Your Favorite Food: ");
    gets(favFood);


    strcat(finalStatment, personName);
    strcat(finalStatment, " Loves To Eat ");
    strcat(finalStatment, favFood);

    puts(finalStatment);


    return 0;


}
