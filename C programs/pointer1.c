#include <stdio.h>
#include <stdlib.h>

void swap(int *p, int *q);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *p,b, x=12;
	p = &x;
	b=*p + 1;
	
	printf("value of x is %d\n",x);
	printf("address of x is %p\n", &x);
	printf("address1 of x is %p\n", *p);
	printf("value1 of x is %d\n",b);
	
	*p = 24;
	
	printf("value3 of x %d\n",x);
	printf("address2 of x %p\n ", *p);
	
	int w=18, u=10000000;
	swap(&w,&u);
	printf("New swapped values of u=%d and w=%d\n",w,u);
	
	return 0;
}

void swap(int *p,int *q){
	int temp;
	temp =*q;
	*q = temp;
}
