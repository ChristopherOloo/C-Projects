#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cat1, cat2, assignments, main_exam, grade;
	
	printf("Enter marks for CAT 1 over 100: \n");
	scanf("%d", &cat1);
	
	printf("Enter marks for CAT 2 over 100: \n");
	scanf("%d", &cat2);
	
	printf("Enter marks for assignments over 100: \n");
	scanf("%d", &assignments);
	
	printf("Enter marks for main-exam over 100:\n ");
	scanf("%d", &main_exam);
	
    grade=((cat1 +cat2)/2)*0.3 + assignments*0.2 + main_exam*0.5;
	
	printf("Total marks is %d\n", grade);
	
	if(grade>=70 && grade<=100){
		printf("Grade :A\n");
		printf("Remarks:Excellent\n");
	}
	
	else if(grade>=60 && grade<=69){
		printf("Grade:B\n");
		printf("Remarks:Very Good\n");
	}
	
	else if(grade>=50 && grade<=59){
		printf("Grade:B\n");
		printf("Remarks:Good\n");
	}
	
	else if(grade>=40 && grade<=49){
		printf("Grade:D\n");
		printf("Remarks:Pass\n");
	}
	
    else { 
		printf("Fail\n");
		printf("Resit\n");
	}	
	return 0;
}
