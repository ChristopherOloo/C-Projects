#include <stdio.h>
#include <stdlib.h>
const MAX=3;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[] = {10,80,300};
	char *friends[] = {"Chris Pilot", "Oloo Mbaka", "Gifted Xaviers"};
	
	char *pttr, **pptr;
	int i, *ptr[MAX];
	
	for(i=0;i<MAX;i++){
		ptr[i] = &arr[i]; /*Assignimg address of */
		
	}
	
	for(i=0;i<MAX;i++){
		printf("The value of arr[%d] = %d\n",i, *ptr[i]*5);
	}
	
	for(i=0;i<MAX;i++){
		printf("The number %d friend is %s\n",i+1, friends[i]);
	}
	return 0;
}
