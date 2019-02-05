#include <stdio.h>

long long int factorial(int N)
{
    long long ans = 1;
    int i;


    for(i=1; i <= N; i++){
    	
		
         ans *= i;
	}	
	
	
    return ans;
}




int main()
{
	 int n;
	
	printf("Enter a nonnegative number\n");
    scanf("%d", &n);
    if(n<0){
    	printf("invalid input!. Try again");
    	int main();
    }
    if(n==0){
    	printf(" %d!= ", n);
		
	}
    
        
    int t;
    for(t=1; t <=n; t++){
	}
    
    
    printf("%lld\n", factorial(t));
    
    return 0;
}
