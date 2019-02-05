#include <stdio.h>
#include <stdlib.h>



/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//list of function prototypes used in the system

void home(void);// the first user interface page
void Librarian(void);
void User(void);
void Registration(void);

int main(int argc, char *argv[]) {
	
	home();
	getch();
	
	return 0;
}

void home(void){
	int choice;
    
	printf("\t Login into the System as:(Choose One)\n" );
	printf("\t 1:Librarian \n");
	printf("\t 2:User \n");
	printf("\t 3:No user account!Register\n");
	scanf("%d",&choice);
	
	switch(getch()){
		case '1':
			Librarian();
			break;
			
		case '2':
			User();
			break;
		
		case '3':
			Registration();
			break;
			
		default:
			printf("\t Invalid Choice! Try Again\n");
			home();
	}
}
