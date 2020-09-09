#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>




int main(){

	char grade = 'A';

	switch(grade){

		case 'A':
			printf("Excellent, You've got an 'A' Grade. \n");
			break;

		case 'B':
			printf("Try a little hard, You are not far from an 'A' grade. \n");
			break;

		case 'C':
			printf("'C' Grade is not the best out there! :( \n");
			break;

		case 'D':
			printf("'D' Grade is the worst Grade out there. \n");
			break;

		case 'F':
			printf("'F' Grade is the most Embarassing Grade out there. \n");
			break;

		default:
			printf("An Error Occoured. \n");
	}

	return 0;

}