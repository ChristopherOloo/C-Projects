#include <stdio.h>
#include <stdlib.h>

int main(){ 

  int *p, x=10;
  p = &x; //the pointer p havng address of x

  printf("The value of x is : %d\n",x);
  printf("The address of x is : %p\n ", p);
  printf("The valuue of x :%d\n", *p);
  printf("The value of x :%d\n", *(&x));
  
  *p = 20;

  printf("The value of x:%d\n", *p);
  printf("The value of x :%d\n", x);
  printf("the address of x %p\n", *p);


  return 0;

}