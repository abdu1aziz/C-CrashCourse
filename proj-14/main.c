#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>




int main(){

	int count, breakAtNum, maxRunAmount;

	maxRunAmount = 100;

	printf("[!] How many times should the Loop Run? \n");
	//scanf(" %d", &breakAtNum);
	breakAtNum = 12;

	for(count = 1; count <= maxRunAmount; count++){

		printf("%d\n", count);

		if (count == breakAtNum){

                printf("Loop Ending Due To Break Statement!");
                break;
		}
	}
}
