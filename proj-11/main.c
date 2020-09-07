#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter;
    counter = 1;

    // Run the Loop Below At least Once.
    do{

        printf("[%d] You are the Best!!\n", counter++);

    // If the Code below is True, Keep running the code Above until it becomes False.
    }while(counter <= 5);




    return 0;
}
