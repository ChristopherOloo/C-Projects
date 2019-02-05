#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
       int num, i;
	   long fact=1;
       printf("Enter the number\n");
       scanf("%d",&num);
       i=num;
       while(i>=1){
       fact=fact*i;
       i--;
      }  
      printf("The factorial of given number %d is %ld\n",num,fact);
 
}
