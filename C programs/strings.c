#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char hobby[12], descr[30], city[12];
	int i;
	
	strcpy(hobby,"Tourist");
	printf("\n Can you be a %s\n",hobby);
	printf("\n\n Enter Your favourite City\n\n");
	gets(city);
	
	for(i=0; city[i]!=0;i++){
		city[i] = toupper(city[i]);
		
	}
	printf("\n\nYour favourite city is %s\n\n",city);
	
	printf("\n Describe to us more about %s\n ",city);
	
	gets(descr);
	puts(descr);
	
	
	
	
	return 0;
}


