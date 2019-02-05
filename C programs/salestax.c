#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double total_amount_collected, sales, county_sales_tax, state_sales_tax,total_sales_tax;

    	
	int counter =1;
	
	do{
	char month[10];
	
    printf("Enter the total amount collected from sales: : Enter -1 to quit\n");
  	scanf("%lf", &total_amount_collected);
	
	if(total_amount_collected<0){
		printf(" You have successfully quited! ");
		int main();
		    
    }
    
    else{
    	
   		   char month[10];

	    	printf("Enter the name of the month:\n");
	    	scanf("%s", &month[10]);
       
			county_sales_tax= 0.04*total_amount_collected;
			state_sales_tax= 0.05*total_amount_collected;
			total_sales_tax= county_sales_tax + state_sales_tax;
			sales=total_amount_collected - total_sales_tax; 
		
	   	 
			printf("Total Sales : %.2lf\n", sales);
			printf("County Sales Tax :%.2lf\n", county_sales_tax);
			printf("State Sales Tax :%.2lf\n", state_sales_tax);
			printf("Total Sales Tax :%.2lf\n", total_sales_tax);
			
			counter ++;
		
		
    }
    
	}while(counter <=12);

	
	return 0;
}   
