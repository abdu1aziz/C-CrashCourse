#include <stdio.h>
#include <stdlib.h>

int main(){

    char f_name[20];
    char l_name[20];
    int  age;


        printf("Enter Your First Name: ");
        scanf("%s", f_name);

        printf("Enter Your Last Name: ");
        scanf("%s", l_name);

        printf("Enter Your Age: ");
        scanf("%d", &age);


        printf("\n\n\n\n[+]Your First Name: %s\n[+]Your Last Name: %s\n[+]Your Current Age: %d", f_name, l_name, age);
        return 0;


}
