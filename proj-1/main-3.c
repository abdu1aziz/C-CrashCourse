#include <stdio.h>
#include <stdlib.h>


int main(){

        /*
          *
          * String 'Hello World' contains white space and takes over a lot more memory space.
          * Adding '\0' in the end of 'Hello World\0' which is a good practice and is used to save space.
          *
          *
          *
          */

          char personName[14] = "Mr. Pentester\0";
          int ageCalculation = 25;

          printf("My Name is %s and I'm %d years old.\n\n\n", personName, ageCalculation);

          personName[2] = 's';

          printf("%s does not exist Yet.\n\n\n", personName);

          char food[] = "Fish";

          printf("Mr. Penetester's favorite food is %s Sandwich.\n\n\n", food);

          strcpy(food, "Chicken");

          printf("Mr. Penetester's favorite food is %s Sandwich.\n\n\n", food);

          return 0;



}
