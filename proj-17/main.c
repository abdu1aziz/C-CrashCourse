#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>



int main(){

	// define string as int.
	int letter = 'b';


	// isdigit (For checking if digits, int or number)

	// isaplha (for checking if alphabets)
	if(isalpha(letter)){

		printf("True!! %c is a Alphabet.\n", letter);
		if(isupper(letter)){
		
			printf("FYI!! %c is also an Uppercase letter to keep in mind.\n", letter);
		
		}else{
			
			printf("FYI!! %c is NOT an Uppercase letter to keep in mind.\n", letter);
		
		}
	
	}else{

		printf("False!! %c is NOT a letter. \n", letter);

	}

	return 0;
}