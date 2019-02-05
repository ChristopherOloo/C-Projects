#include <stdio.h>
#include <stdlib.h>
long facto(int number); 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	
	int number,i; 
	double e;
	
	printf("Enter a number to estimate the factorial:\n");
	scanf("%d",&number);
	
   while(number>=0){
   	e += 1/facto(number);
   	
   	number--;
   	
   }
    
    
	printf("The estimate of e = %.2lf\n", e);
	
	return 0;
}

long facto( int number){
    double number_factorial=1;
    int original_number =number;
		
		if(number<0){
		printf("Invalid input! Try again\n");
		int main();
		
	    }
	
	    else{
	    	
		    while(number>=1){
		    	number_factorial *= number;
				number--;
			
		    }
		    
		printf("the %d! = %.0lf\n", original_number , number_factorial);
		        
	    }
	    
	    return number_factorial;
	}
	
