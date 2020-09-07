#include <stdio.h>
#include <stdlib.h>
#define NAME "Mr. Pentester"

int main(){

        char name[] = NAME;

        printf("Value of Global Variable called 'NAME' is %s.\n\n", name);
        printf("Value of Global Variable called 'NAME' is %s.\n\n", NAME);

        return 0;

}
