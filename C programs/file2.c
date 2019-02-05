#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	FILE *cfPtr; // cfptr=new1.txt file pointer
	
	// fopen opens files. Exit program ifunable tocreste file
	if ((cfPtr = fopen("new1.txt", "r")) == NULL){
		puts("File could not be opened");
	}
	else {
		// read account , name and balance from file
		
		unsigned int account; // acc no.
		char name[30]; //acc name
		double balance; //acc balance
		
		printf("%-10s%-13s\n", "Account", "Name" ,"Balance");
		fscanf(cfPtr, "%d%29s%lf", &account, name , &balance);
		
		
		// write acccount name and balance into file with fprintf
		while(!feof(cfPtr) ) {
			fprintf( "%-10d%-13s%7.2f\n", account, name, balance);
			fscanf(cfPtr,"%d%29%lf",&account, name,&balance);
			
			scanf("%%d%29s%lf", &account, name, &balance);
		}
		
		fclose(cfPtr); //fclose closes files
	}
	return 0;
}
