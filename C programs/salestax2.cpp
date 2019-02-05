/*  Name: C OLOO OGUDE           AND        NAME: MWAKISHA JEUNICE MAMBORI 
   REG. NO : S13/09368/17                   REG. NO : S13/09369/17
   ASSIGNMENT 2        exercise 3.16        
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char *argv[]) {
	double total_amount_collected, sales, county_sales_tax, state_sales_tax,total_sales_tax;

    	
	int counter =1;
	
	do{
	char month[10];
	
    printf("\n\n\tEnter the total amount collected from sales: : Enter -1 to quit\n\t");
  	scanf("%lf", &total_amount_collected);
	
	if(total_amount_collected<0){
		printf(" You have successfully quited!\n ");
		exit(1);
		    
    }
    
    else{
    	
   		   char month[10];

	    	printf("\tEnter the name of the month:\n\t");
	    	scanf("%s", &month[10]);
	    	
	    	//calculating the sales , totals and sales taxes
       
			county_sales_tax= 0.04*total_amount_collected;
			state_sales_tax= 0.05*total_amount_collected;
			total_sales_tax= county_sales_tax + state_sales_tax;
			sales=total_amount_collected - total_sales_tax; 
		
	   	 
			printf("\tTotal Sales : %.2lf\n", sales);
			printf("\tCounty Sales Tax :%.2lf\n", county_sales_tax);
			printf("\tState Sales Tax :%.2lf\n", state_sales_tax);
			printf("\tTotal Sales Tax :%.2lf\n\n", total_sales_tax);
			
			counter ++;
		
		
    }
    
	}while(counter <=12);

	
	return 0;
}   
