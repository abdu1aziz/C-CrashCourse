#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b = 10;

    // increment of '+1' before running the statement below.

    printf("a * b = %d", ++a*b);


    a = 5;
    b = 10;

    printf("\n\na * b = %d", a++*b);

    // increment of '+1' after running the statement above.


    return 0;
}
