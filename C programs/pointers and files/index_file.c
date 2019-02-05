#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	FILE *cfPtr; // cfptr=new1.txt file pointer
	
	// fopen opens files. Exit program ifunable tocreste file
	if ((cfPtr = fopen("new1.txt", "w")) == NULL){
		puts("File could not be opened");
	}
	else {
		puts("Enter the account , name , and balance");
		puts("Enter EOF to end input.");
		printf("%s","?");
		
		unsigned int account; // acc no.
		char name[30]; //acc name
		double balance; //acc balance
		
		scanf("%d%29s%lf",&account, name,&balance);
		
		// write acccount name and balance into file with fprintf
		while(!feof(stdin) ) {
			fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
			fprintf("%s","?");
			
			scanf("%%d%29s%lf", &account, name, &balance);
		}
		
		fclose(cfPtr); //fclose closes files
	}
	
}