#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	long e;
	
	long facto(n){
		
	    long n_factorial = 1;
	
	    printf("Enter the value of n:\n");
	    scanf("%d", &n);
	    if(n<0){
		printf("Invalid input! Try again\n");
		int main();
	}
	
	else{
		int count = n;
		
 	    if(n==0){
			
		printf("%d! = 1", n);
		
		}
		
		else{

		while(n>=1){
			n_factorial *= n;

			n--;		
		}
		
	    printf("%d! = %lu",count , n_factorial);
		
		}
	}
	
	e = 1 + 1/facto(n);
   }
	
	
	return 0;
	
}

