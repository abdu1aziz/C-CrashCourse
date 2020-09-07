#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;


    printf("How Old Are You? ");
    scanf("%d", &age);




    if (age >= 18){

    char gender;
    printf("Enter Your Gender (M/F): ");
    scanf(" %c", &gender);


        if (gender == 'm' || gender == 'M'){

            printf("Dude! ");

        }else{

            printf("M'Lady! ");

        }

        printf("You Can Legally Smoke.");

    }else{

        printf("You Can't Smoke For Another %d Years.", 18-age);

    }

    return 0;

}

