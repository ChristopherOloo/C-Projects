/*  Name: C OLOO OGUDE           AND        NAME: MWAKISHA JEUNICE MAMBORI 
   REG. NO : S13/09368/17                   REG. NO : S13/09369/17
   ASSIGNMENT 2        exercise 3.45a       
*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int number;
	long number_factorial = 1;
	
	printf("\nEnter a nonpositive  number:\n");
	scanf("%d", &number);
	
	//if one enters a negative number
	if(number<0){
		printf("\nInvalid input! Try again\n");
		int main();
	}
	
	else{
		int count = number;
		//factorial for zero
		
 	    if(number==0){
			
		printf("\n%d! = 1\n", number);
		
		}
		
		//calculating the factorial of a number using while loop
		
		else{

		while(number>=1){
			number_factorial *= number;

			number--;		
		}
		
	    printf("\n%d! = %lu\n",count , number_factorial);
		
		}
		
		
	}

	
	return 0;
}
