#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grade1, grade2, grade3, FinalGrade;

    printf("[+] Enter Your 3 Test(s) Grades: \n");
    scanf(" %f", &grade1);
    scanf(" %f", &grade2);
    scanf(" %f", &grade3);

    FinalGrade = ((grade1 + grade2 + grade3) / 300) * 100;

    if(FinalGrade >= 92){

        printf("[+] Your Final Grade is 'A'.");

    }else if(FinalGrade >= 80){

        printf("[+] Your Final Grade is 'B'.");

    }else if(FinalGrade >= 70){

        printf("[+] Your Final Grade is 'C'.");

    }else if(FinalGrade >= 60){

        printf("[+] Your Final Grade is 'D'.");

    }else{

        printf("[+] Your Final Grade is 'F'.");

    }

    printf("\n[+] Your Final Grade Average: %.2f", FinalGrade);


}
