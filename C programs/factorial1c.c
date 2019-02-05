/*  Name: C OLOO OGUDE           AND        NAME: MWAKISHA JEUNICE MAMBORI 
   REG. NO : S13/09368/17                   REG. NO : S13/09369/17
   ASSIGNMENT 2        exercise 3.45c    
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long facto(int number); 


int main(int argc, char *argv[]) {
	
	int number; 
	double e_pow_p;
	
	printf("\nEnter a number to estimate the value of e^x:\n");
	scanf("%d",&number);
	
	//we have taken p to replaced x
	// we use while loop to calculate e^x = 1 + x/1! + x^2/2! + x^3/3!...  the e^x is replaced by e_pow_p
	
   int p=0;	
   while(p<=number){
   	e_pow_p += pow(number,p)/facto(p); 
   	
   	p++;
   	
   }
    
    
	printf("\nThe estimate of e^x = %.2lf\n", e_pow_p);
	
	return 0;
}

//the function to calculate the factorial of a number 

long facto( int number){
    double number_factorial=1;
    
    
		
		if(number<0){
		printf("\nInvalid input! Try again\n");
		int main();
		
	    }
	
	    else{
	    	
		    while(number>=1){
		    	number_factorial *= number;
				number--;
			
		    }
		    
		
		        
	    }
	    
	    return number_factorial;
	}
	
