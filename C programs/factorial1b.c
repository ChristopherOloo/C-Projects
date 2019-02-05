/*  Name: C OLOO OGUDE           AND        NAME: MWAKISHA JEUNICE MAMBORI 
   REG. NO : S13/09368/17                   REG. NO : S13/09369/17
   ASSIGNMENT 2        exercise 3.45b      
*/
#include <stdio.h>
#include <stdlib.h>
long facto(int number); 


int main(int argc, char *argv[]) {
	
	int number,i; 
	double e;
	
	printf("\nEnter a number to estimate the th value of e:\n");
	scanf("%d",&number);
	
	// e = 1+ 1/1! + 1/2! + 1/3!...
	
   while(number>=0){
   	e += 1/facto(number);
   	
   	number--;
   	
   }
    
    
	printf("\nThe estimate of e = %.2lf\n", e);
	
	return 0;
}

//function for calculating the factorial

long facto( int number){
    double number_factorial=1;
    
    
		
		if(number<0){
		printf("\n Invalid input! Try again \n");
		exit(1);
		
	    }
	
	    else{
	    	
		    while(number>=1){
		    	number_factorial *= number;
				number--;
			
		    }
		    
		
		        
	    }
	    
	    return number_factorial;
	}
	
