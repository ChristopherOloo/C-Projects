#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


long long int factorial(int N)
{
    long long ans = 1;
    int i;


    for(i=N; N>=1; N--){
    	
		
         ans *= N;
	}	
	
	
    return ans;
}




int main()
{
	 int n, x=1,w;double e, e_n;
	
	printf("Enter a nonnegative number\n");
    scanf("%d", &n);
    if(n<0){
    	printf("invalid input!. Try again");
    	int main();
    }
    if(n==0){
    	printf(" %d!= 1", n);
		
	}
    
        
    int t;
    for(t=1; t <=n; t++){
	}
    
    
    printf(" %d! =%lld\n",n, factorial(t));
    e = 1 + 1/factorial(t);
    
       
    printf(" the estimated value of e =%.2lf", e);
    
    for(w=1;w<=n;w++){
    	e_n= 1 + pow(n,w)/factorial(t);
    	
	}
	
	
	printf(" the e^x = %lf", e_n );
    
    return 0;
}

