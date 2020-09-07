#include <stdio.h>
#include <stdlib.h>

int main()
{

    int days;
    float moneyMade;

    days = 1;
    moneyMade = 0.50;

    while (days <= 31){

        printf("DAY: %d \t MONEY MADE: %.2f\n", days, moneyMade);
        moneyMade *= 2;
        days++;
    }
    return 0;
}
