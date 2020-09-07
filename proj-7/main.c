#include <stdio.h>
#include <stdlib.h>

int main()
{

    int age;

    printf("Enter Your Age: ");
    scanf(" %d", &age);

    (age >= 18) ? printf("You Can Drink!!") : printf("You Can't Drink!!");


    int friendsCount;

    printf("\n\nHow Many Friends Do You Have: ");
    scanf(" %d", &friendsCount);

    printf("OMG!! %d Friend%s %s Awesome!!", friendsCount, (friendsCount > 1) ? "s" : "", (friendsCount > 1) ? "are" : "is");


    return 0;
}
