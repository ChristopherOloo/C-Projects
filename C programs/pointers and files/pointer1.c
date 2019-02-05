#include <stdio.h>
#include <stdlib.h>

int new_value(int);

int main(){
  int x = 25;
  printf("value of x is:%d\n");

  new_value(x);
  printf("new value of x",x);

  return 0;

}

int new_value(int x){
  return x =15;
}