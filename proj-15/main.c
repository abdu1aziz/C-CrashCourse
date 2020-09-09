#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main(){

	int num = 1;

	do{
		// code to run.

		if(num == 3 || num == 4){

            num++;
			continue;
		}

		printf("# %d is Available.\n", num);
		num++;

	}while(num <= 5); // condition

	return 0;
}
